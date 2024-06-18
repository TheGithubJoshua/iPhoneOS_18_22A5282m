@interface SBLongPressDisambiguationAlertItem : SBAlertItem {
    long long _result;
}

@property (readonly, copy, nonatomic) id /* block */ completion;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCompletion:(id /* block */)a0;
- (BOOL)dismissOnLock;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (void)deactivateForButton;
- (BOOL)ignoreIfAlreadyDisplaying;

@end
