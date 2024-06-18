@class NSBundle, NSDictionary, NSString, NSURL, PROPlugInGroup;
@protocol PROPlugInDelegate, PKPlugIn;

@interface PROConcretePlugIn : PROPlugIn <NSCopying> {
    NSBundle *bundle;
    struct __CFUUID { } *uuidRef;
    NSDictionary *infoDictionary;
    PROPlugInGroup *group;
    NSString *localizationTableName;
    NSURL *helpURL;
    id sharedInstance;
    struct { unsigned char loadedInstanceEver : 1; unsigned char checkedForIcon : 1; unsigned char checkedForHelp : 1; } plugInFlags;
    id<PROPlugInDelegate> delegate;
    id<PKPlugIn> pluginKitPlug;
    BOOL entirelyOutOfProcess;
    BOOL _isBlocked;
    NSString *_blockedLookupKey;
}

- (BOOL)isBlocked;
- (id)infoDictionary;
- (id)group;
- (id)vendorName;
- (id)displayName;
- (id)className;
- (unsigned long long)hash;
- (struct __CFUUID { } *)uuid;
- (void)setDelegate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)delegate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)bundle;
- (void)reportError:(id)a0;
- (void)dealloc;
- (id)version;
- (id)uuidString;
- (void)setIsBlocked:(BOOL)a0;
- (id)helpURL;
- (id)apiUsedByPlugInForProtocol:(id)a0;
- (id)blockedLookupKey;
- (id)implementedProtocols;
- (id)infoString;
- (id)initWithDictionary:(id)a0 bundle:(id)a1 delegate:(id)a2;
- (id)initWithDictionary:(id)a0 bundle:(id)a1 delegate:(id)a2 pluginKitPlug:(id)a3;
- (BOOL)is3rdParty;
- (BOOL)isEqualToPlugIn:(id)a0;
- (Class)plugInClass;
- (id)plugInInstance;
- (id)pluginKitPlug;
- (void)setBlockedLookupKey:(id)a0 pluginName:(id)a1 version:(id)a2;
- (id)sharedPlugInInstance;

@end
