from typing import Union
#from fastapi import APIRouter
#from models.note import Note
from fastapi import APIRouter, Request, Form
from fastapi.responses import HTMLResponse
from fastapi.templating import Jinja2Templates
from config.db import conn

#from schema.note import noteEntity, notesEntity

note = APIRouter()
templates = Jinja2Templates(directory="templates")


@note.get("/", response_class=HTMLResponse)
async def read_item(request: Request):
    docs = conn.notes.notes.find({})
    newdocs = []
    for doc in docs:
        newdoc = {
            "title": doc["title"],
            "desc": doc["item"],
            "important": doc["important"]
        }

        newdocs.append(newdoc)

    return templates.TemplateResponse("index.html", {"request": request, "newdocs": newdocs})


@note.post("/")
async def create_item(request: Request):

    form = await request.form()

    formDict = dict(form)
 
    formDict["important"] = True if formDict.get("important") == "on" else False
 
    note = conn.notes.notes.insert_one(formDict)
 
    return {"success": True}



