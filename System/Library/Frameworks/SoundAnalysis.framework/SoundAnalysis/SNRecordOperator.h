@class AVAudioFormat, AVAudioFile;

@interface SNRecordOperator : NSObject <SNOperator> {
    AVAudioFormat *_format;
    AVAudioFile *_outputFile;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)processInput:(id)a0 portID:(id)a1 downstreamHandler:(id /* block */)a2;
- (void)processTerminationWithOptionalError:(id)a0 portID:(id)a1 downstreamHandler:(id /* block */)a2;

@end
