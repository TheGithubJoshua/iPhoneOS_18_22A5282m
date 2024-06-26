@class NSString, UIImage;

@interface VKBlockUIActivity : UIActivity

@property (copy, nonatomic) id /* block */ block;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *type;

- (id)init;
- (id)activityType;
- (id)initWithTitle:(id)a0 block:(id /* block */)a1;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (id)activityImage;
- (void)performActivity;
- (long long)activityCategory;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)initWithTitle:(id)a0 systemImageName:(id)a1 activityType:(id)a2 block:(id /* block */)a3;
- (id)initWithTitle:(id)a0 image:(id)a1 activityType:(id)a2 block:(id /* block */)a3;
- (id)initWithTitle:(id)a0 image:(id)a1 block:(id /* block */)a2;
- (id)initWithTitle:(id)a0 systemImageName:(id)a1 block:(id /* block */)a2;

@end
