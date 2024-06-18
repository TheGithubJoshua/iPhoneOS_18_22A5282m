@interface CNSiriIntelligenceSettings : NSObject <CNSiriIntelligenceSettingsProtocol> {
    _Atomic BOOL _shouldShowSiriSuggestions;
    int _notificationToken;
}

- (id)init;
- (void)setShouldShowSiriSuggestions:(BOOL)a0;
- (BOOL)shouldShowSiriSuggestions;
- (void)dealloc;

@end
