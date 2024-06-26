@interface SiriSetup.VoiceOptionsView : NSObject <UITableViewDataSource, UITableViewDelegate, SUICVoiceSelectionDisplaying> {
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ cellReuseIdentifier;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ voiceSelectionViewModelProvider;
@property (nonatomic, retain) void /* unknown type, empty encoding */ voiceSelectionEventHandler;

- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)voiceSelectionViewModelDidChange;

@end
