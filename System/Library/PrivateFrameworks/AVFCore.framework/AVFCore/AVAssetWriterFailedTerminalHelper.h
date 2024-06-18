@class NSError;

@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper {
    NSError *_terminalError;
}

- (void)flush;
- (void)finishWriting;
- (void)finishWritingWithCompletionHandler:(id /* block */)a0;
- (void)startSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)flushSegment;
- (id)initWithConfigurationState:(id)a0;
- (long long)status;
- (id)error;
- (void)dealloc;
- (void)endSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithConfigurationState:(id)a0 terminalError:(id)a1;
- (void)setFinishWritingDelegate:(id)a0;

@end
