@class PBUnknownFields, NSString, PBDataReader, NSMutableArray, GEOVersionManifest;

@interface GEOResources : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_abExperimentURL;
    NSString *_addressCorrectionInitURL;
    NSString *_addressCorrectionUpdateURL;
    NSMutableArray *_announcementsSupportedLanguages;
    NSString *_announcementsURL;
    NSMutableArray *_attributions;
    NSString *_authProxyURL;
    NSString *_authToken;
    NSString *_backgroundDispatcherURL;
    NSString *_backgroundRevGeoURL;
    NSString *_batchReverseGeocoderURL;
    NSString *_batchTrafficProbeURL;
    NSString *_bluePOIDispatcherURL;
    NSString *_businessPortalBaseURL;
    NSMutableArray *_dataSetURLOverrides;
    NSMutableArray *_dataSets;
    NSString *_directionsURL;
    NSString *_dispatcherURL;
    NSMutableArray *_displayStrings;
    NSString *_etaURL;
    NSMutableArray *_fontChecksums;
    NSMutableArray *_fonts;
    NSMutableArray *_iconChecksums;
    NSMutableArray *_icons;
    NSMutableArray *_locationShiftEnabledRegions;
    NSString *_logMessageUsageURL;
    NSString *_logMessageUsageV3URL;
    NSString *_muninBaseURL;
    NSMutableArray *_muninBuckets;
    NSMutableArray *_muninVersions;
    NSString *_polyLocationShiftURL;
    NSString *_proactiveRoutingURL;
    NSString *_problemCategoriesURL;
    NSString *_problemOptInURL;
    NSString *_problemStatusURL;
    NSString *_problemSubmissionURL;
    NSString *_realtimeTrafficProbeURL;
    NSMutableArray *_regionalResources;
    NSString *_releaseInfo;
    NSString *_resourcesURL;
    NSMutableArray *_resources;
    NSString *_reverseGeocoderVersionsURL;
    NSString *_searchAttributionManifestURL;
    NSString *_simpleETAURL;
    NSString *_spatialLookupURL;
    NSMutableArray *_styleSheetChecksums;
    NSMutableArray *_styleSheets;
    NSMutableArray *_textureChecksums;
    NSMutableArray *_textures;
    NSMutableArray *_tileGroups;
    NSMutableArray *_tileSets;
    NSMutableArray *_urlInfoSets;
    GEOVersionManifest *_versionManifest;
    NSString *_wifiConnectionQualityProbeURL;
    NSMutableArray *_xmlChecksums;
    NSMutableArray *_xmls;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _locationShiftVersion;
    struct { unsigned char has_locationShiftVersion : 1; unsigned char read_unknownFields : 1; unsigned char read_abExperimentURL : 1; unsigned char read_addressCorrectionInitURL : 1; unsigned char read_addressCorrectionUpdateURL : 1; unsigned char read_announcementsSupportedLanguages : 1; unsigned char read_announcementsURL : 1; unsigned char read_attributions : 1; unsigned char read_authProxyURL : 1; unsigned char read_authToken : 1; unsigned char read_backgroundDispatcherURL : 1; unsigned char read_backgroundRevGeoURL : 1; unsigned char read_batchReverseGeocoderURL : 1; unsigned char read_batchTrafficProbeURL : 1; unsigned char read_bluePOIDispatcherURL : 1; unsigned char read_businessPortalBaseURL : 1; unsigned char read_dataSetURLOverrides : 1; unsigned char read_dataSets : 1; unsigned char read_directionsURL : 1; unsigned char read_dispatcherURL : 1; unsigned char read_displayStrings : 1; unsigned char read_etaURL : 1; unsigned char read_fontChecksums : 1; unsigned char read_fonts : 1; unsigned char read_iconChecksums : 1; unsigned char read_icons : 1; unsigned char read_locationShiftEnabledRegions : 1; unsigned char read_logMessageUsageURL : 1; unsigned char read_logMessageUsageV3URL : 1; unsigned char read_muninBaseURL : 1; unsigned char read_muninBuckets : 1; unsigned char read_muninVersions : 1; unsigned char read_polyLocationShiftURL : 1; unsigned char read_proactiveRoutingURL : 1; unsigned char read_problemCategoriesURL : 1; unsigned char read_problemOptInURL : 1; unsigned char read_problemStatusURL : 1; unsigned char read_problemSubmissionURL : 1; unsigned char read_realtimeTrafficProbeURL : 1; unsigned char read_regionalResources : 1; unsigned char read_releaseInfo : 1; unsigned char read_resourcesURL : 1; unsigned char read_resources : 1; unsigned char read_reverseGeocoderVersionsURL : 1; unsigned char read_searchAttributionManifestURL : 1; unsigned char read_simpleETAURL : 1; unsigned char read_spatialLookupURL : 1; unsigned char read_styleSheetChecksums : 1; unsigned char read_styleSheets : 1; unsigned char read_textureChecksums : 1; unsigned char read_textures : 1; unsigned char read_tileGroups : 1; unsigned char read_tileSets : 1; unsigned char read_urlInfoSets : 1; unsigned char read_versionManifest : 1; unsigned char read_wifiConnectionQualityProbeURL : 1; unsigned char read_xmlChecksums : 1; unsigned char read_xmls : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *tileGroups;
@property (retain, nonatomic) NSMutableArray *tileSets;
@property (retain, nonatomic) NSMutableArray *styleSheets;
@property (retain, nonatomic) NSMutableArray *textures;
@property (retain, nonatomic) NSMutableArray *fonts;
@property (retain, nonatomic) NSMutableArray *icons;
@property (retain, nonatomic) NSMutableArray *regionalResources;
@property (retain, nonatomic) NSMutableArray *xmls;
@property (retain, nonatomic) NSMutableArray *attributions;
@property (readonly, nonatomic) BOOL hasAuthToken;
@property (retain, nonatomic) NSString *authToken;
@property (readonly, nonatomic) BOOL hasResourcesURL;
@property (retain, nonatomic) NSString *resourcesURL;
@property (readonly, nonatomic) BOOL hasSearchAttributionManifestURL;
@property (retain, nonatomic) NSString *searchAttributionManifestURL;
@property (readonly, nonatomic) BOOL hasDirectionsURL;
@property (retain, nonatomic) NSString *directionsURL;
@property (readonly, nonatomic) BOOL hasEtaURL;
@property (retain, nonatomic) NSString *etaURL;
@property (readonly, nonatomic) BOOL hasReleaseInfo;
@property (retain, nonatomic) NSString *releaseInfo;
@property (readonly, nonatomic) BOOL hasBatchReverseGeocoderURL;
@property (retain, nonatomic) NSString *batchReverseGeocoderURL;
@property (readonly, nonatomic) BOOL hasSimpleETAURL;
@property (retain, nonatomic) NSString *simpleETAURL;
@property (retain, nonatomic) NSMutableArray *styleSheetChecksums;
@property (retain, nonatomic) NSMutableArray *textureChecksums;
@property (retain, nonatomic) NSMutableArray *fontChecksums;
@property (retain, nonatomic) NSMutableArray *iconChecksums;
@property (retain, nonatomic) NSMutableArray *xmlChecksums;
@property (readonly, nonatomic) BOOL hasAddressCorrectionInitURL;
@property (retain, nonatomic) NSString *addressCorrectionInitURL;
@property (readonly, nonatomic) BOOL hasAddressCorrectionUpdateURL;
@property (retain, nonatomic) NSString *addressCorrectionUpdateURL;
@property (readonly, nonatomic) BOOL hasPolyLocationShiftURL;
@property (retain, nonatomic) NSString *polyLocationShiftURL;
@property (readonly, nonatomic) BOOL hasProblemSubmissionURL;
@property (retain, nonatomic) NSString *problemSubmissionURL;
@property (readonly, nonatomic) BOOL hasProblemStatusURL;
@property (retain, nonatomic) NSString *problemStatusURL;
@property (readonly, nonatomic) BOOL hasReverseGeocoderVersionsURL;
@property (retain, nonatomic) NSString *reverseGeocoderVersionsURL;
@property (readonly, nonatomic) BOOL hasProblemCategoriesURL;
@property (retain, nonatomic) NSString *problemCategoriesURL;
@property (readonly, nonatomic) BOOL hasAnnouncementsURL;
@property (retain, nonatomic) NSString *announcementsURL;
@property (retain, nonatomic) NSMutableArray *announcementsSupportedLanguages;
@property (readonly, nonatomic) BOOL hasDispatcherURL;
@property (retain, nonatomic) NSString *dispatcherURL;
@property (readonly, nonatomic) BOOL hasProblemOptInURL;
@property (retain, nonatomic) NSString *problemOptInURL;
@property (readonly, nonatomic) BOOL hasVersionManifest;
@property (retain, nonatomic) GEOVersionManifest *versionManifest;
@property (readonly, nonatomic) BOOL hasAbExperimentURL;
@property (retain, nonatomic) NSString *abExperimentURL;
@property (readonly, nonatomic) BOOL hasBusinessPortalBaseURL;
@property (retain, nonatomic) NSString *businessPortalBaseURL;
@property (readonly, nonatomic) BOOL hasLogMessageUsageURL;
@property (retain, nonatomic) NSString *logMessageUsageURL;
@property (retain, nonatomic) NSMutableArray *locationShiftEnabledRegions;
@property (nonatomic) BOOL hasLocationShiftVersion;
@property (nonatomic) unsigned int locationShiftVersion;
@property (retain, nonatomic) NSMutableArray *resources;
@property (readonly, nonatomic) BOOL hasSpatialLookupURL;
@property (retain, nonatomic) NSString *spatialLookupURL;
@property (retain, nonatomic) NSMutableArray *dataSets;
@property (retain, nonatomic) NSMutableArray *dataSetURLOverrides;
@property (readonly, nonatomic) BOOL hasRealtimeTrafficProbeURL;
@property (retain, nonatomic) NSString *realtimeTrafficProbeURL;
@property (readonly, nonatomic) BOOL hasBatchTrafficProbeURL;
@property (retain, nonatomic) NSString *batchTrafficProbeURL;
@property (readonly, nonatomic) BOOL hasProactiveRoutingURL;
@property (retain, nonatomic) NSString *proactiveRoutingURL;
@property (readonly, nonatomic) BOOL hasLogMessageUsageV3URL;
@property (retain, nonatomic) NSString *logMessageUsageV3URL;
@property (readonly, nonatomic) BOOL hasBackgroundDispatcherURL;
@property (retain, nonatomic) NSString *backgroundDispatcherURL;
@property (readonly, nonatomic) BOOL hasBluePOIDispatcherURL;
@property (retain, nonatomic) NSString *bluePOIDispatcherURL;
@property (readonly, nonatomic) BOOL hasBackgroundRevGeoURL;
@property (retain, nonatomic) NSString *backgroundRevGeoURL;
@property (readonly, nonatomic) BOOL hasWifiConnectionQualityProbeURL;
@property (retain, nonatomic) NSString *wifiConnectionQualityProbeURL;
@property (readonly, nonatomic) BOOL hasMuninBaseURL;
@property (retain, nonatomic) NSString *muninBaseURL;
@property (retain, nonatomic) NSMutableArray *muninVersions;
@property (readonly, nonatomic) BOOL hasAuthProxyURL;
@property (retain, nonatomic) NSString *authProxyURL;
@property (retain, nonatomic) NSMutableArray *urlInfoSets;
@property (retain, nonatomic) NSMutableArray *muninBuckets;
@property (retain, nonatomic) NSMutableArray *displayStrings;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)resourceType;
+ (Class)textureType;
+ (Class)xmlType;
+ (Class)attributionType;
+ (Class)muninBucketType;
+ (Class)xmlChecksumType;
+ (Class)announcementsSupportedLanguagesType;
+ (Class)dataSetType;
+ (Class)dataSetURLOverrideType;
+ (Class)displayStringsType;
+ (Class)fontChecksumType;
+ (Class)fontType;
+ (Class)iconChecksumType;
+ (Class)iconType;
+ (Class)locationShiftEnabledRegionType;
+ (Class)muninVersionType;
+ (Class)regionalResourceType;
+ (Class)styleSheetChecksumType;
+ (Class)styleSheetType;
+ (Class)textureChecksumType;
+ (Class)tileGroupType;
+ (Class)tileSetType;
+ (Class)urlInfoSetType;

- (unsigned long long)iconChecksumsCount;
- (void)clearFonts;
- (void)addMuninBucket:(id)a0;
- (unsigned long long)xmlsCount;
- (void)addFont:(id)a0;
- (id)xmlAtIndex:(unsigned long long)a0;
- (void)clearDisplayStrings;
- (void)addTileSet:(id)a0;
- (id)styleSheetChecksumAtIndex:(unsigned long long)a0;
- (unsigned long long)styleSheetChecksumsCount;
- (id)textureAtIndex:(unsigned long long)a0;
- (void)clearTextures;
- (unsigned long long)fontChecksumsCount;
- (void)addXml:(id)a0;
- (void)clearXmls;
- (id)preferredDataSetForMapsABClient;
- (void)addDataSet:(id)a0;
- (id)dataSetAtIndex:(unsigned long long)a0;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)attributionAtIndex:(unsigned long long)a0;
- (unsigned long long)fontsCount;
- (void)clearUrlInfoSets;
- (unsigned long long)urlInfoSetsCount;
- (void)clearXmlChecksums;
- (void)readAll:(BOOL)a0;
- (unsigned long long)styleSheetsCount;
- (void)clearMuninBuckets;
- (unsigned long long)attributionsCount;
- (void)addStyleSheetChecksum:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearFontChecksums;
- (unsigned long long)regionalResourcesCount;
- (void)addAttribution:(id)a0;
- (unsigned long long)muninVersionsCount;
- (unsigned long long)announcementsSupportedLanguagesCount;
- (unsigned long long)xmlChecksumsCount;
- (void)addResource:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)clearTileGroups;
- (void)addUrlInfoSet:(id)a0;
- (id)fontAtIndex:(unsigned long long)a0;
- (void)clearAttributions;
- (void)addTextureChecksum:(id)a0;
- (id)styleSheetAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)dataSetsCount;
- (id)resourceAtIndex:(unsigned long long)a0;
- (id)preferedURLSetFor:(id)a0;
- (id)iconAtIndex:(unsigned long long)a0;
- (unsigned long long)dataSetURLOverridesCount;
- (void)clearIcons;
- (void)addIcon:(id)a0;
- (void)addMuninVersion:(id)a0;
- (void)addLocationShiftEnabledRegion:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)tileGroupsCount;
- (BOOL)isValid;
- (id)regionalResourceAtIndex:(unsigned long long)a0;
- (id)muninVersionAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (void)clearRegionalResources;
- (void)addTexture:(id)a0;
- (void)addStyleSheet:(id)a0;
- (void)addIconChecksum:(id)a0;
- (id)muninBucketAtIndex:(unsigned long long)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)tileSetAtIndex:(unsigned long long)a0;
- (id)textureChecksumAtIndex:(unsigned long long)a0;
- (unsigned long long)iconsCount;
- (void)addAnnouncementsSupportedLanguages:(id)a0;
- (void)clearLocationShiftEnabledRegions;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void).cxx_destruct;
- (void)clearStyleSheetChecksums;
- (unsigned long long)texturesCount;
- (BOOL)isEqual:(id)a0;
- (void)clearTextureChecksums;
- (id)announcementsSupportedLanguagesAtIndex:(unsigned long long)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)locationShiftEnabledRegionsCount;
- (void)addTileGroup:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addDataSetURLOverride:(id)a0;
- (id)initWithData:(id)a0;
- (id)xmlChecksumAtIndex:(unsigned long long)a0;
- (id)displayStringsAtIndex:(unsigned long long)a0;
- (void)addRegionalResource:(id)a0;
- (void)addXmlChecksum:(id)a0;
- (id)preferredDataSetForClientDatasetMetadata:(id)a0;
- (void)clearTileSets;
- (void)clearStyleSheets;
- (id)locationShiftEnabledRegionAtIndex:(unsigned long long)a0;
- (id)dataSetURLOverrideAtIndex:(unsigned long long)a0;
- (id)urlInfoSetAtIndex:(unsigned long long)a0;
- (void)clearDataSets;
- (void)clearResources;
- (void)clearMuninVersions;
- (unsigned long long)muninBucketsCount;
- (void)clearAnnouncementsSupportedLanguages;
- (void)addDisplayStrings:(id)a0;
- (unsigned long long)resourcesCount;
- (id)tileGroupAtIndex:(unsigned long long)a0;
- (id)jsonRepresentation;
- (unsigned long long)textureChecksumsCount;
- (id)iconChecksumAtIndex:(unsigned long long)a0;
- (void)addFontChecksum:(id)a0;
- (void)clearDataSetURLOverrides;
- (unsigned long long)displayStringsCount;
- (unsigned long long)tileSetsCount;
- (id)fontChecksumAtIndex:(unsigned long long)a0;
- (void)clearIconChecksums;

@end