@class NSString;
@protocol AFUISiriLanguageDelegate;

@interface AFUISiriLanguage : NSObject

@property (readonly, weak, nonatomic, getter=_delegate) id<AFUISiriLanguageDelegate> delegate;
@property (copy, nonatomic, setter=_setSpokenLanguageCode:) NSString *spokenLanguageCode;
@property (nonatomic) BOOL setupAssistantHasCompletedInitialRunChecked;
@property (nonatomic, getter=_setupAssistantHasCompletedInitialRunAvailable) BOOL setupAssistantHasCompletedInitialRunAvailable;

- (id)init;
- (id)initWithDelegate:(id)a0;
- (void)_spokenLanguageDidChange:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_currentLocaleDidChange:(id)a0;
- (id)_computeSpokenLanguageCode;
- (void)_updateSpokenLanguageCode;

@end
