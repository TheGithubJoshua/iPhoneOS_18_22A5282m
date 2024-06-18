@interface SeymourUI.PreviewPlayerViewController : AVPlayerViewController {
    void /* unknown type, empty encoding */ contentIdentifier;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ metricPage;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (id)initWithCoder:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithPlayerLayerView:(id)a0;

@end
