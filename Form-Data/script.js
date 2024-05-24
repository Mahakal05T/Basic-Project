document.getElementById('clearBtn').addEventListener('click', () => {
    document.getElementById('userForm').reset();
});

document.getElementById('submitBtn').addEventListener('click', () => {
    const name = document.getElementById('name').value;
    const email = document.getElementById('email').value;
    const phone = document.getElementById('phone').value;
    const dob = document.getElementById('dob').value;
    const description = document.getElementById('description').value;

    const data = { name, email, phone, dob, description };

    fetch('/submit', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify(data),
    }).then(response => response.json())
      .then(data => {
          if (data.status === 'success') {
              alert('Data submitted successfully!');
          } else {
              alert('Data submission failed!');
          }
      })
      .catch(error => {
          console.error('Error:', error);
          alert('An error occurred while submitting data.');
      });
});

document.getElementById('showBtn').addEventListener('click', () => {
    fetch('/show')
        .then(response => response.json())
        .then(data => {
            const dataContainer = document.getElementById('dataContainer');
            dataContainer.textContent = JSON.stringify(data, null, 2);
            document.getElementById('dataDisplay').classList.remove('hidden');
        })
        .catch(error => {
            console.error('Error:', error);
            alert('An error occurred while fetching data.');
        });
});