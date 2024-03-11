from django.shortcuts import render
from .models import Post

posts = [
{
        'author':'TestGuy',
        'datepost':'03.07.2024',
        'content':'HELLO NIGA',
        'title':'My first post'
},
{
        'author':'Lppetrov',
        'datepost':'03.07.2024',
        'content':'Second Post',
        'title':'Post 2'
}    
 ]


def home(request):
    dict1 = {
        'post': Post.objects.all()
    }
    return render(request,'home/Main_page.html',dict1)
def about(request):
    return render(request,'home/About.html',{'title':'About'})

