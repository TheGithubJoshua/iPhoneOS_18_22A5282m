@class NSString;

@interface AXSpeechPronunciationHelper : NSObject <AXUIClientDelegate> {
    BOOL _inSession;
    id /* block */ _resultCallback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_assetUpdaterClient;
- (float)audioLevel;
- (void).cxx_destruct;
- (id)userInterfaceClient:(id)a0 processMessageFromServer:(id)a1 withIdentifier:(unsigned long long)a2 error:(id *)a3;
- (void)dealloc;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)a0;
- (void)cancelPronunciationSession;
- (void)startPronunciationSession:(id)a0 resultCallback:(id /* block */)a1;
- (void)stopPronunciationSession;
- (BOOL)supportsPronunciationSessions;

@end
