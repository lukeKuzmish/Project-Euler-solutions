#total hack solution
for c in range(1000,1,-1):
  for b in range(1000,1,-1):
    a = 1000- (c + b)
    #print str(a)+","+str(b)+","+str(c)
    if (a>0):
      if ((c*c)==((a*a)+(b*b))):
        print "match for ", a, b, c
        print "multiple: ", a*b*c