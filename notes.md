#Notes on [CS97 SI](http://web.stanford.edu/class/cs97si/)

##Mathematics
####1. prime number
	bool isprime(int n)
	{
	    int flag = 1;
	    for (int i = 2; i <= sqrt(n); ++i)  
	    {
	        if (n % i == 0)
	        {
	            flag = 0;
	            break;
	        }
	    }
	    return flag;
	}
	
####2. Fast Exponentiation
- recursive algorithms:

```
double pow(double a, int n) {		if(n == 0) return 1;		if(n == 1) return a;	double t = pow(a, n/2);	return t * t * pow(a, n%2);}
```
- non-recursive:

```
double pow(double a, int n) {       double ret = 1;       while(n) {           if(n%2 == 1) ret *= a;           a *= a; n /= 2;}return ret; }
```

####3. GCD
```
int gcd(int a, int b) {       while(b){int r = a % b; a = b; b = r;}       return a;}
```

####4. Line-Line intersection
- $ax+by+c=0$
- $dx+ey+f=0$
- $x = (fb-ce)/(ae-bd)$
- $y = (cd-fa)/(ae-bd)$

####5. Circumcircle of a Triangle
- Find the (equations of the) bisectors of AB and BC 
- Compute their intersection

####6. Area of a Triangle
- Use cross product: 2S=|(B−A)×(C−A)| 
- Area of a Simple Polygon: If P is convex, we can **decompose** P into triangles:

####7. circle with radius intersect two points

```
q = sqrt((x2-x1)^2 + (y2-y1)^2)
x3 = (x1+x2)/2
y3 = (y1+y2)/2

first circle:
x = x3 + sqrt(r^2-(q/2)^2)*(y1-y2)/q
y = y3 + sqrt(r^2-(q/2)^2)*(x2-x1)/q
  
Second Circle:
x = x3 - sqrt(r^2-(q/2)^2)*(y1-y2)/q
y = y3 - sqrt(r^2-(q/2)^2)*(x2-x1)/q  
```
