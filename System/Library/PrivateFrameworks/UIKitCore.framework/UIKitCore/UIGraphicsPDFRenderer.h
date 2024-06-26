@interface UIGraphicsPDFRenderer : UIGraphicsRenderer

+ (void)prepareCGContext:(struct CGContext { } *)a0 withRendererContext:(id)a1;
+ (struct CGContext { } *)contextWithFormat:(id)a0;
+ (Class)rendererContextClass;

- (void)popContext:(id)a0;
- (id)init;
- (id)PDFDataWithActions:(id /* block */)a0;
- (BOOL)writePDFToURL:(id)a0 withActions:(id /* block */)a1 error:(id *)a2;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pushContext:(id)a0;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 format:(id)a1;

@end
