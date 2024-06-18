@interface AVAlexSpeechSynthesisVoice : AVSpeechSynthesisVoice <AXAlternativeSpeechSynthesisVoice>

- (long long)quality;
- (id)name;
- (id)language;
- (id)identifier;
- (id)nameWithoutQuality;

@end
