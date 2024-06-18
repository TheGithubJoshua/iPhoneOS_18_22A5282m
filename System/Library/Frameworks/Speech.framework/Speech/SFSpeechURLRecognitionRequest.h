@class NSURL;

@interface SFSpeechURLRecognitionRequest : SFSpeechRecognitionRequest

@property (readonly, copy, nonatomic) NSURL *URL;

- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)_startedConnectionWithLanguageCode:(id)a0 delegate:(id)a1 taskHint:(long long)a2 requestIdentifier:(id)a3;
- (id)_startedLocalConnectionWithLanguageCode:(id)a0 delegate:(id)a1 taskHint:(long long)a2 requestIdentifier:(id)a3 taskIdentifier:(id)a4;

@end
