@class MPMoviePlayerController;

@interface MPMoviePlayerViewController : UIViewController

@property (readonly, nonatomic) MPMoviePlayerController *moviePlayer;

- (id)initWithCoder:(id)a0;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithContentURL:(id)a0;

@end
