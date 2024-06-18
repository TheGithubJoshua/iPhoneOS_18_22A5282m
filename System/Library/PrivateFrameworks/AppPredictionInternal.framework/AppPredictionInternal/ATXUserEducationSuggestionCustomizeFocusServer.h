@class ATXDNDModeConfigurationClient, ATXUserEducationSuggestionConnector;

@interface ATXUserEducationSuggestionCustomizeFocusServer : ATXUserEducationSuggestionBaseServer <ATXUserEducationSuggestionModeChangeObserver> {
    ATXUserEducationSuggestionConnector *_connector;
    ATXDNDModeConfigurationClient *_modeConfigurationClient;
}

- (void)processModeChangeEvent:(id)a0;
- (id)initWithConnector:(id)a0;
- (void)_processModeChangeEvent:(id)a0;
- (void).cxx_destruct;
- (void)sendSuggestion:(id)a0 eventType:(unsigned long long)a1;
- (void)dealloc;

@end
