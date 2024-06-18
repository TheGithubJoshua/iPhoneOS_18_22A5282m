@class NSData;

@interface WBSHistoryCrypto : NSObject {
    NSData *_cachedCryptographicKey;
}

@property (readonly, nonatomic) NSData *salt;
@property (readonly, nonatomic) NSData *cryptographicKey;

- (id)init;
- (id)decryptDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithCryptographicKey:(id)a0 salt:(id)a1;
- (id)_createCryptographicKey;
- (id)encryptDictionary:(id)a0;
- (id)_createOrLoadCryptographicKey;

@end
