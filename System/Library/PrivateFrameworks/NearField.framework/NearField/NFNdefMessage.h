@class NSArray, NSString, NSMutableArray;

@interface NFNdefMessage : NSObject <NSSecureCoding, NFNdefMessage> {
    NSMutableArray *_records;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *records;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBytes:(const void *)a0 length:(unsigned int)a1;
- (id)initWithCoder:(id)a0;
- (void)addRecord:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)asData;
- (void).cxx_destruct;
- (id)decode;
- (void)addRecordArray:(id)a0;
- (id)initWithNDEFMessage:(id)a0;

@end
