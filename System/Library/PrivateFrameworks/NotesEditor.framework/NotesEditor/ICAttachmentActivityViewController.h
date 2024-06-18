@class NSArray;

@interface ICAttachmentActivityViewController : UIActivityViewController

@property (retain, nonatomic) NSArray *attachments;
@property (nonatomic) BOOL ignoreAttachmentsForCopyToPasteboard;

- (void).cxx_destruct;
- (void)_performActivity:(id)a0;
- (id)activityTypesThatInhibitPDFGeneration;
- (BOOL)inhibitPDFGenerationForActivityType:(id)a0;
- (BOOL)writeGalleryPDFDataToPasteboardIfNecessaryForActivity:(id)a0 attachments:(id)a1;

@end
