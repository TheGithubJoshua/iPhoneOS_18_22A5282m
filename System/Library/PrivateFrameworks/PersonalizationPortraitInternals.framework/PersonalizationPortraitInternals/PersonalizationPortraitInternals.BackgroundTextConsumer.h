@interface PersonalizationPortraitInternals.BackgroundTextConsumer : PersonalizationPortraitInternals.Consumer <HVNewsConsumer, HVNotesConsumer, HVSafariConsumer, HVThirdPartyAppConsumer, HVMailConsumer>

- (id)consumeNotesContentWithContext:(id)a0;
- (id)deleteDataDerivedFromContentMatchingRequest:(id)a0;
- (id)consumeNewsArticleViewsWithContext:(id)a0;
- (void).cxx_destruct;
- (id)consumeThirdPartyAppContentWithContext:(id)a0;
- (id)consumeSafariContentWithContext:(id)a0;
- (id)consumeMailContentWithContext:(id)a0;
- (id)consumerName;

@end
