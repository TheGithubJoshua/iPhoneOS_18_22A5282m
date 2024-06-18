@class ICTextAttachment, ICAttachment, NSString;

@interface ICAttachmentViewController : ICAbstractAttachmentViewController <ICAttachmentViewControllerInitializing>

@property (nonatomic) BOOL forManualRendering;
@property (readonly, weak, nonatomic) ICAttachment *attachment;
@property (weak, nonatomic) ICTextAttachment *textAttachment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)initWithTextAttachment:(id)a0 forManualRendering:(BOOL)a1 layoutManager:(id)a2;

@end
