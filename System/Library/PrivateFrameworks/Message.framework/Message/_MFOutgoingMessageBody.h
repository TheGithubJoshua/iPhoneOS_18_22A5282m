@class NSString, MFBufferedDataConsumer, NSData;

@interface _MFOutgoingMessageBody : MFMessageBody <MFCollectingDataConsumer> {
    MFBufferedDataConsumer *_consumer;
    NSData *_rawData;
    unsigned long long _count;
    BOOL _lastNewLine;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)data;
- (id)init;
- (long long)appendData:(id)a0;
- (id)rawData;
- (void)done;
- (void).cxx_destruct;
- (unsigned long long)count;
- (BOOL)isLastCharacterNewLine;

@end
