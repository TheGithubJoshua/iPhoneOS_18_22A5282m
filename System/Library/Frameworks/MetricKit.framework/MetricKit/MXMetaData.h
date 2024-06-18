@class NSString;

@interface MXMetaData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *regionFormat;
@property (retain) NSString *osVersion;
@property (retain) NSString *deviceType;
@property (retain) NSString *applicationBuildVersion;
@property (retain) NSString *platformArchitecture;

- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)JSONRepresentation;
- (id)initWithRegionFormat:(id)a0 osVersion:(id)a1 deviceType:(id)a2 appBuildVersion:(id)a3 platformArchitecture:(id)a4;
- (id)DictionaryRepresentation;
- (id)initWithRegionFormat:(id)a0 osVersion:(id)a1 deviceType:(id)a2 appBuildVersion:(id)a3;

@end
