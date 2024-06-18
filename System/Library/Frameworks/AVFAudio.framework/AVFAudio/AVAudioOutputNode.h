@interface AVAudioOutputNode : AVAudioIONode

- (unsigned int)manualRenderingMaximumFrameCount;
- (BOOL)setManualRenderingPCMFormat:(id)a0 maximumFrameCount:(unsigned int)a1;
- (id)manualRenderingFormat;

@end
