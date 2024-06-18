@class NSString, IMHandle;

@interface IMSPIHandle : NSObject {
    IMHandle *_imHandle;
    BOOL _haveFetchedIMHandle;
}

@property (retain) NSString *address;
@property BOOL isMe;
@property (retain) NSString *countryCode;
@property (readonly) BOOL isBusiness;
@property (readonly) NSString *businessName;
@property (readonly) NSString *displayName;
@property (readonly) NSString *cnContactID;

- (id)handle;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithAddress:(id)a0 countryCode:(id)a1 isMe:(BOOL)a2;

@end
