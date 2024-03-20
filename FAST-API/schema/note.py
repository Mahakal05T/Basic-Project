def noteEntity(item) -> dict:
    return {
        "id": str(item["_id"]),
        "title": str(item["title"]),
        "desc": str(item["item"]),
        "important": str(item["important"])
    }


def notesEntity(items) -> list:
    
    return [noteEntity(items) for item in items]