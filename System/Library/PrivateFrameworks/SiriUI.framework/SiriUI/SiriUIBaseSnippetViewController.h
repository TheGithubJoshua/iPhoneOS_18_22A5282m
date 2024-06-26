@class SAUISnippet, SiriUISashItem, NSUUID, AceObject, NSString;
@protocol SiriUIBaseAceObjectViewControllerDelegate;

@interface SiriUIBaseSnippetViewController : UIViewController <SiriSharedUIViewControlling, SiriUIViewController>

@property (retain, nonatomic) SAUISnippet *snippet;
@property (weak, nonatomic) id<SiriUIBaseAceObjectViewControllerDelegate> delegate;
@property (readonly, nonatomic) SiriUISashItem *sashItem;
@property (retain, nonatomic) NSUUID *instrumentationTurnIdentifier;
@property (retain, nonatomic) AceObject *aceObject;
@property (nonatomic, getter=isUtteranceUserInteractionEnabled) BOOL utteranceUserInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (double)desiredHeight;
- (BOOL)hasSash;
- (void)wasAddedToTranscript;
- (void)siriDidDeactivate;
- (void)siriDidReceiveAdditionalContent:(id)a0 error:(id)a1;

@end
