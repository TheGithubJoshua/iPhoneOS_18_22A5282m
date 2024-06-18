@class NSString;

@interface POKerberosStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *ticketKeyPath;
@property (retain) NSString *realm;
@property (retain) NSString *cacheName;
@property (retain) NSString *upn;
@property BOOL importSuccessful;
@property BOOL exchangeRequired;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)dataRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithData:(id)a0;

@end
