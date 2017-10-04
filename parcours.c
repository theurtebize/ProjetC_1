void parcours(char *fichier)
{
    DIR *dir;
    struct dirent *entry;
    
    dir = opendir(fichier);
    if(dir==NULL)
    {
        parror(fichier);
        return;
    }
    
    while((entry=readdir(dir)=NULL)
    {
        if (entry->sd_type==DT_DIR) 
        {
            printf("répertoire");
        }
        printf("%s\n",entry->d_name);
    }
    
    closedir(dir);
}
