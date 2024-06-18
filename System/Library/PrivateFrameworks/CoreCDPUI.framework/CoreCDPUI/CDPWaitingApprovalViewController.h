@class CDPRemoteValidationEscapeOffer, NSString, UIActivityIndicatorView, UILabel, UIButton;

@interface CDPWaitingApprovalViewController : CDPTableViewController <UITableViewDataSource, UITableViewDelegate> {
    UIActivityIndicatorView *_spinner;
    UILabel *_waitingLabel;
    UIButton *_escapeButton;
    CDPRemoteValidationEscapeOffer *_escapeOffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)escapeOfferSelectedWithOption:(id)a0;
- (id)initWithEscapeOffer:(id)a0;
- (void)remoteApprovalSucceeded;

@end
