@class NSData, PDFDocument;

@interface HRPDFViewController : HKViewController

@property (retain, nonatomic) NSData *pdfData;
@property (retain, nonatomic) PDFDocument *pdfDocument;

- (id)pdfView;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithPDFData:(id)a0;

@end
