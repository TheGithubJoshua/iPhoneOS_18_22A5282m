@class NSArray, NSString, NAFuture, CPBarButton;

@interface CPGridTemplate : CPTemplate <CPGridTemplateClientDelegate, CPBarButtonProviding>

@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (readonly, nonatomic) NSArray *gridButtons;
@property (readonly, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *leadingNavigationBarButtons;
@property (retain, nonatomic) NSArray *trailingNavigationBarButtons;
@property (retain, nonatomic) CPBarButton *backButton;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)performUpdate;
- (void)updateTitle:(id)a0;
- (id)_prepareButtons:(id)a0;
- (void)handleActionForControlIdentifier:(id)a0;
- (id)initWithTitle:(id)a0 gridButtons:(id)a1;
- (void)updateGridButtons:(id)a0;

@end
