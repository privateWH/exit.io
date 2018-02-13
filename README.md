exit.io
=======

Aside from out... It should also concern with the input:


Example:

txt-in-f-preview 'Find Me In World' <$1 txt-in-f-names
Justification: first attempt find there exists "Find Me in World", now just recall the same command but add feeder into txt-in-f-names. so the full usage will be something like. 

txt-in-f-preview 'Find Me In World' <$1 txt-in-f-names | xargs replace 'Find Me In World' 'Solo' -- 

It means, the preview looks good, now fit that criteria into a query that generate file names with such criteria, and then pipe the list of name one by one into the replace command (comes with MySQL) and do a verbatim replacement of the text.


txt-in-f-preview 'Find Me In World' 'US' <$1,$2 txt-in-f-names

Where the parameters for txt-in-f-preview can carry straight over to txt-in-f-names

This creates

P1 Input 1 (The output may be omitted or may carried into the input of P2)
P2 Input 1

Concerns:
Is mean P1 and P2 running in-order or out-of-order?
