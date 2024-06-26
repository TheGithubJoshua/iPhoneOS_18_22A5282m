@class NSString, UIImage;

@interface PKHandwritingFeedbackActivity : UIActivity

@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (id)activityImage;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
