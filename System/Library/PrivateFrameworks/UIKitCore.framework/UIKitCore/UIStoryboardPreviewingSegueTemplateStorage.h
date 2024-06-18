@class UIStoryboardPreviewingSegueTemplate, UIStoryboardSegueTemplate, UIView;

@interface UIStoryboardPreviewingSegueTemplateStorage : NSObject <NSCoding>

@property (weak, nonatomic) UIView *sender;
@property (weak, nonatomic) UIStoryboardPreviewingSegueTemplate *previewTemplate;
@property (weak, nonatomic) UIStoryboardSegueTemplate *commitTemplate;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
