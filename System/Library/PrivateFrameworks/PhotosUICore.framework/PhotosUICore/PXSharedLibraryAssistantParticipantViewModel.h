@class UIImage, NSString;

@interface PXSharedLibraryAssistantParticipantViewModel : PXObservable

@property (readonly, copy, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;

- (id)init;
- (void)performChanges:(id /* block */)a0;
- (void)setImage:(id)a0;
- (void)setSubtitle:(id)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;

@end
