@class NSString, NSArray;

@interface PFUbiquityLocation : NSObject <NSCopying> {
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_ubiquityRootLocationPath;
    int _ubiquityLocationType;
    NSString *_exportingPeerID;
    NSString *_storeName;
    NSString *_modelVersionHash;
    NSString *_filename;
    NSArray *_otherPathComponents;
    BOOL _isDirectory;
    BOOL _isRootUbiquitous;
}

@property (readonly, nonatomic) unsigned long long hash;

+ (void)initialize;

- (id)init;
- (void)setFilename:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)setStoreName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setHash:(unsigned long long)a0;
- (BOOL)isEqualToURL:(id)a0;
- (void)setExportingPeerID:(id)a0;
- (void)setIsRootUbiquitous:(BOOL)a0;
- (void)setModelVersionHash:(id)a0;
- (void)setOtherPathComponents:(id)a0;
- (void)setUbiquityLocationType:(int)a0;
- (void)setUbiquityRootLocation:(id)a0;
- (void)setUbiquityRootLocationPath:(id)a0;

@end
