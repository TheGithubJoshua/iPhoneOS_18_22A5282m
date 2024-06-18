@class NSArray, MUPlaceCardActionsRowView, MKPlaceActionManager;
@protocol MUPlaceCardActionsRowViewMenuProvider;

@interface MUPlaceCardActionsRowViewController : UIViewController

@property (copy, nonatomic) NSArray *items;
@property (weak, nonatomic) MKPlaceActionManager *actionManager;
@property (weak, nonatomic) id<MUPlaceCardActionsRowViewMenuProvider> menuProvider;
@property (readonly, nonatomic) NSArray *actionButtons;
@property (readonly, nonatomic) MUPlaceCardActionsRowView *actionsRowView;

- (id)initWithStyle:(unsigned long long)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)updateActionsRowView;

@end
