@class NSString;

@interface MTRQRCodeSetupPayloadParser : NSObject {
    NSString *_base38Representation;
    void *_chipQRCodeSetupPayloadParser;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBase38Representation:(id)a0;
- (id)populatePayload:(id *)a0;

@end
