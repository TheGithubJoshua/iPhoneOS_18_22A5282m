@class XPCRequest, NSData;
@protocol NSCoding;

@interface XPCNSRequest : NSObject

@property (readonly, retain, nonatomic) XPCRequest *request;
@property (readonly, retain, nonatomic) id<NSCoding> message;
@property (readonly, retain, nonatomic) NSData *data;

- (void).cxx_destruct;
- (id)initWithXPCRequest:(id)a0;
- (void)sendReply:(id)a0;

@end
