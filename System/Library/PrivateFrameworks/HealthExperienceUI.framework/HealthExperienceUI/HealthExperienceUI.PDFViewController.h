@interface HealthExperienceUI.PDFViewController : UIViewController <PDFDocumentDelegate> {
    void /* unknown type, empty encoding */ pdfDocument;
    void /* unknown type, empty encoding */ pdfData;
    void /* unknown type, empty encoding */ pdfFilename;
    void /* unknown type, empty encoding */ pageNumberFormat;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ shareItemSource;
}

- (id)initWithCoder:(id)a0;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)didTapDone;
- (Class)classForPage;
- (void)didTapShare;

@end
