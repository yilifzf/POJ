#OJ技巧

###1.输入重定向
    #ifndef _OJ_
        freopen("/Users/fzf_air/code/xcodetest/xcodetest/intext.txt", "r", stdin);
       //freopen("output.txt", "w", stdout);
    #endif   
###2.加快内存读写速度。
	const int SZ = 1<<19;

	struct fastio

	{

    char inbuf[SZ];char outbuf[SZ];fastio()

    {

        setvbuf(stdin,inbuf,_IOFBF,SZ);

        setvbuf(stdout,outbuf,_IOFBF,SZ);

    }

	}io;


