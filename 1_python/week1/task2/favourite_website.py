# My module that contain favourite websites and function called firefox to open this websites in new tab 

import webbrowser

facebook_link='https://www.facebook.com/'
youtube_link='https://www.youtube.com/'
linkedin_link='https://www.linkedin.com/'

website_dict ={
    "facebook":"https://www.facebook.com/",
    "youtube": "https://www.youtube.com/",
    "linkedin": "https://www.linkedin.com/"
}


def firefox(link):
    webbrowser.open_new_tab(link)

