@class DTXMessage, NSData;

@interface DTActivityTraceTapMemo : DTTapDataMemo {
    DTXMessage *_message;
    NSData *_data;
}

@property (nonatomic) unsigned long long lastMachContinuousTimeSeen;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (id)initWithData:(id)a0;
- (const void *)getBufferWithLength:(unsigned long long *)a0;

@end
