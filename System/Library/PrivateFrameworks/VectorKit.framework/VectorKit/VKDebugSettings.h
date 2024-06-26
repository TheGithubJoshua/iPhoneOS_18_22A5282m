@class NSString;

@interface VKDebugSettings : NSObject {
    BOOL _highlightRouteLineSnappingRegion;
    BOOL _shouldOverrideSuperSampleKernelSize;
    struct VKDebugLabelAnimationParameters { struct VKDebugLabelAnimationItemParameters { float startDelay; float delay; float duration; unsigned long long easing; } alpha; struct VKDebugLabelAnimationItemParameters { float startDelay; float delay; float duration; unsigned long long easing; } scale; struct VKDebugLabelAnimationItemParameters { float startDelay; float delay; float duration; unsigned long long easing; } translate; struct VKDebugLabelAnimationItemParameters { float startDelay; float delay; float duration; unsigned long long easing; } rotate; } _hideLabelAnimationParams;
    struct VKDebugLabelAnimationParameters { struct VKDebugLabelAnimationItemParameters { float startDelay; float delay; float duration; unsigned long long easing; } alpha; struct VKDebugLabelAnimationItemParameters { float startDelay; float delay; float duration; unsigned long long easing; } scale; struct VKDebugLabelAnimationItemParameters { float startDelay; float delay; float duration; unsigned long long easing; } translate; struct VKDebugLabelAnimationItemParameters { float startDelay; float delay; float duration; unsigned long long easing; } rotate; } _showLabelAnimationParams;
    struct unordered_set<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { struct __hash_table<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *>, std::allocator<std::__hash_node<unsigned long long, void *>>> { struct __hash_node_base<std::__hash_node<unsigned long long, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<unsigned long long>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<unsigned long long>> { float __value_; } __p3_; } __table_; } _enabledLogicConsoles;
}

@property (nonatomic) BOOL disableOverlayTextConsole;
@property (nonatomic) BOOL paintMapTiles;
@property (nonatomic) BOOL paintSelectedMapTiles;
@property (nonatomic) struct GEOTileSetRegion { unsigned int _maxX; unsigned int _maxY; unsigned int _maxZ; unsigned int _minX; unsigned int _minY; unsigned int _minZ; } selectedMapTilesToPaint;
@property (nonatomic) BOOL paintTiles;
@property (nonatomic) BOOL paintRoadBoundaries;
@property (nonatomic) BOOL paintRoadTiles;
@property (nonatomic) BOOL paintPoiTiles;
@property (nonatomic) BOOL paintPointTiles;
@property (nonatomic) BOOL paintPolygonTiles;
@property (nonatomic) BOOL paintLandcoverTiles;
@property (nonatomic) BOOL paintVenues;
@property (nonatomic) BOOL hideBuildingsOnCollision;
@property (nonatomic) BOOL hideAssetsOnCollision;
@property (nonatomic) BOOL paintDaVinciTiles;
@property (nonatomic) BOOL paintDaVinciBuildingTiles;
@property (nonatomic) BOOL paintDrapedPolygons;
@property (nonatomic) BOOL paintDaVinciMetaTiles;
@property (nonatomic) float daVinciMetaTileOpacity;
@property (nonatomic) BOOL paintDaVinciMeshBounds;
@property (nonatomic) BOOL paintDaVinciTileBoundaryVerts;
@property (nonatomic) BOOL paintDaVinciDecalBounds;
@property (nonatomic) BOOL paintDaVinciElevationRaster;
@property (nonatomic) BOOL paintVertices;
@property (nonatomic) BOOL paintJunctions;
@property (nonatomic) BOOL paintCoastlines;
@property (nonatomic) BOOL paintBuildings;
@property (nonatomic) BOOL paintLoadReason;
@property (nonatomic) BOOL disableRoute;
@property (nonatomic) BOOL disableBuildingFootprints;
@property (nonatomic) BOOL labelHighlighting;
@property (nonatomic) BOOL lockLabelHighlighting;
@property (nonatomic) BOOL showClientStyleAttributes;
@property (nonatomic) BOOL showLabelsNavState;
@property (nonatomic) BOOL showFlexZoneRanges;
@property (nonatomic) BOOL transitHighlighting;
@property (nonatomic) BOOL labelFacingCullDisabled;
@property (nonatomic) BOOL labelDedupingDisabled;
@property (nonatomic) BOOL labelCollisionDisabled;
@property (nonatomic) BOOL labelCollideContinuously;
@property (nonatomic) BOOL labelFlipAlternatePositionsEnable;
@property (nonatomic) BOOL labelTileDecodeEnabled;
@property (nonatomic) BOOL disableBackgroundLabelLayout;
@property (nonatomic) BOOL labelAllowDefaultStyle;
@property (nonatomic) BOOL labelAllowDefaultIcon;
@property (nonatomic) BOOL labelUpdateMapTilesContinuously;
@property (nonatomic) BOOL enableDitherTransparency;
@property (nonatomic) BOOL labelStyleOverridesDisabled;
@property (nonatomic) BOOL labelAutoOffsetRoadText;
@property (nonatomic) BOOL dontMatchRouteLine;
@property (nonatomic) BOOL dontMapMatchToSnappedRouteLine;
@property (nonatomic) BOOL highlightRouteLineSnappingStatus;
@property (nonatomic) BOOL dontVerifyRouteToTransitSnapping;
@property (nonatomic) BOOL showManeuverPoints;
@property (nonatomic) BOOL paintRoadSigns;
@property (nonatomic) BOOL paintLabelBounds;
@property (nonatomic) BOOL paintLabelRoadFeatures;
@property (nonatomic) BOOL paintLabelCollisionLines;
@property (nonatomic) BOOL paintLabelCounts;
@property (nonatomic) unsigned char labelerOutputIndex;
@property (nonatomic) BOOL displayTextureAtlas;
@property (nonatomic) BOOL disableIconTextureAtlas;
@property (nonatomic) unsigned char textureAtlasIndex;
@property (nonatomic) unsigned short textureAtlasPageIndex;
@property (nonatomic) BOOL paintTransitCounts;
@property (nonatomic) BOOL hideDirectionalArrows;
@property (nonatomic) BOOL textlessPOIsEnabled;
@property (nonatomic) float textlessPOIsMinZoom;
@property (nonatomic) BOOL labelHideLineFeatures;
@property (nonatomic) BOOL labelHidePointFeatures;
@property (nonatomic) BOOL labelHidePhysicalFeatures;
@property (nonatomic) BOOL loadGreenTraffic;
@property (nonatomic) BOOL useStaticTrafficFeed;
@property (nonatomic) BOOL showTrafficCasing;
@property (nonatomic) BOOL texturedTrafficCasing;
@property (nonatomic) BOOL prioritizeTrafficSkeleton;
@property (nonatomic) BOOL paintRoadsStitchedByName;
@property (nonatomic) BOOL realisticWireframeEnabled;
@property (nonatomic) BOOL altitudePauseLoading;
@property (nonatomic) BOOL altitudeFreezeViewNode;
@property (nonatomic) BOOL altitudeTexturePaging;
@property (nonatomic) BOOL altitudeShowTileBounds;
@property (nonatomic) BOOL altitudeHighResSatellite;
@property (nonatomic) BOOL altitudeMipmapSatellite;
@property (nonatomic) BOOL altitudeMipmapFlyover;
@property (nonatomic) BOOL altitudeMipmapObjectTree;
@property (nonatomic) BOOL altitudeShowNightLight;
@property (nonatomic) BOOL altitudePrintRenderedTilesStat;
@property (nonatomic) BOOL altitudeDisableC3mTextureLoading;
@property (nonatomic) BOOL altitudeShowTriggerBounds;
@property (nonatomic) BOOL disableTransitLineDrawing;
@property (nonatomic) BOOL disableTransitLineMerging;
@property (nonatomic) BOOL disableTransitLineGroupMerging;
@property (nonatomic) BOOL dumpTransitTileContents;
@property (nonatomic) BOOL dumpRouteAndPath;
@property (nonatomic) BOOL disableIntraLinkTransitLineCrossings;
@property (nonatomic) BOOL useMetalRenderer;
@property (nonatomic) BOOL showNavCameraDebugConsole;
@property (nonatomic) BOOL showNavCameraDebugConsoleAttributes;
@property (nonatomic) BOOL showNavCameraDebugConsoleProperties;
@property (nonatomic) BOOL showNavCameraDebugLegend;
@property (nonatomic) BOOL showNavCameraDebugOverlay;
@property (nonatomic) BOOL navCameraForceComplexIntersection;
@property (nonatomic) BOOL highlightUndergroundRouteGeometry;
@property (nonatomic) float routeTrafficTransitionDistance;
@property (nonatomic) float routeWidthStartTransitionDistance;
@property (nonatomic) float routeWidthEndTransitionDistance;
@property (nonatomic) BOOL enableDaVinciStyleRoute;
@property (nonatomic) BOOL enableDynamicRouteWidth;
@property (nonatomic) BOOL showStaticRouteWidth;
@property (nonatomic) float ribbonCrispness;
@property (nonatomic) BOOL enableAntialiasing;
@property (nonatomic) float altitudeLodScale;
@property (nonatomic) float altitudeTileQualityThreshold;
@property (nonatomic) float altitudeHideMeshTime;
@property (nonatomic) float altitudeFadeSpeed;
@property (nonatomic) BOOL altitudeTourSpeedup;
@property (nonatomic) float altitudeTourSpeedupFactor;
@property (nonatomic) BOOL isInstalledInLockScreen;
@property (nonatomic) BOOL enableLoggingInLockScreen;
@property (nonatomic) BOOL useBuildingShadowTexture;
@property (nonatomic) BOOL layoutContinuously;
@property (nonatomic) BOOL enableSignPostEvents;
@property (nonatomic) BOOL disableStylesheetAnimations;
@property (nonatomic) BOOL drawPerformanceHUD;
@property (nonatomic) BOOL expandedPerformanceHUD;
@property (nonatomic) BOOL trackingCameraZoomFurther;
@property (nonatomic) BOOL holdOntoStyleAttributes;
@property (nonatomic) int debugOverlayOffsetX;
@property (nonatomic) int debugOverlayOffsetY;
@property (nonatomic) BOOL paintOverlayFoundationAssociation;
@property (nonatomic) BOOL drawDebugTransit;
@property (nonatomic) BOOL labelTransitLineCollisionEnabled;
@property (nonatomic) BOOL labelHighlightingVerboseLoggingEnabled;
@property (nonatomic) BOOL labelHighlightingTransitFeaturesOnly;
@property (nonatomic) BOOL labelOcclusionDisabled;
@property (nonatomic) struct { BOOL borders; BOOL folds; BOOL angles; float minAngle; float maxAngle; } landmark2DStrokeSettings;
@property (nonatomic) BOOL shouldUseTestTileLoader;
@property (nonatomic) BOOL constantlyChangeTileGroup;
@property (nonatomic) double constantlyChangeTileGroupInterval;
@property (nonatomic) BOOL disableRoadSignLimit;
@property (nonatomic) BOOL showNavLabelOverlay;
@property (nonatomic) BOOL showNavLabelRouteAvoidanceOverlay;
@property (nonatomic) BOOL enableTrafficFeatureLabelDebugging;
@property (nonatomic) BOOL enableRouteLineLabelingDebugging;
@property (nonatomic) BOOL disableRouteAnnotationLimit;
@property (nonatomic) BOOL enableEtaLabelDebugging;
@property (nonatomic) BOOL enableRouteShareSectionDebugging;
@property (nonatomic) BOOL enableEtaLabelRectDebugging;
@property (nonatomic) unsigned long long etaLabelDebugScore;
@property (nonatomic) unsigned int etaLabelDebugOrientationMask;
@property (nonatomic) BOOL etaLabelsAvoidScreenEdges;
@property (nonatomic) BOOL enableRouteIntersectionTesting;
@property (nonatomic) BOOL forceEtaLabelPlacement;
@property (nonatomic) BOOL traceEtaDebugLog;
@property (nonatomic) BOOL enableARDebugConsole;
@property (nonatomic) BOOL enableAROmniTileLoader;
@property (nonatomic) BOOL arOverrideDefaults;
@property (nonatomic) float arVirtualPlaneHeight;
@property (nonatomic) float arDefaultHeight;
@property (nonatomic) unsigned long long arSwipeGesture;
@property (nonatomic) unsigned long long arPinchGesture;
@property (nonatomic) BOOL arRenderAtNativeRate;
@property (nonatomic) unsigned long long navDisplayRate;
@property (nonatomic) BOOL paintKeysInView;
@property (nonatomic) BOOL paintStandardLabelMapData;
@property (nonatomic) BOOL paintPolygonLayerData;
@property (nonatomic) BOOL paintRoadTileData;
@property (nonatomic) BOOL enableRoadSignArtworkDebugging;
@property (readonly, nonatomic) BOOL preserveModelTile;
@property (nonatomic) BOOL muninDebugLayer;
@property (nonatomic) BOOL muninGraphConnections;
@property (nonatomic) BOOL muninShowRigTransitionInfo;
@property (nonatomic) BOOL muninIgnorePlacesMetadata;
@property (nonatomic) BOOL muninOverrideParallax;
@property (nonatomic) float muninCameraPanOffset;
@property (nonatomic) float muninParallaxSpring;
@property (nonatomic) float muninParallaxDamper;
@property (nonatomic) float muninParallaxScale;
@property (nonatomic) float muninTransitionMinResolution;
@property (nonatomic) float muninTransitionMaxResolution;
@property (nonatomic) BOOL muninSlowMotion;
@property (nonatomic) BOOL enableMuninMiniMapRoadWidths;
@property (nonatomic) BOOL enableMuninMiniMapComposedEdgeRoadColoring;
@property (nonatomic) BOOL enableMuninMiniMapCollectionPoints;
@property (nonatomic) BOOL enableMuninMiniMapRoadZData;
@property (nonatomic) BOOL enableMuninRoadNetworkMiniMap;
@property (nonatomic) float muninRoadNetworkMiniMapAreaInMeters;
@property (nonatomic) unsigned long long muninIntermediatePointStep;
@property (nonatomic) unsigned long long muninAvailabilityOverride;
@property (nonatomic) BOOL overrideLod;
@property (nonatomic) unsigned char lodOverride;
@property (nonatomic) BOOL overrideIntermediateLod;
@property (nonatomic) unsigned char intermediateLodOverride;
@property (nonatomic) BOOL muninReplayLastTap;
@property (nonatomic) struct { float x; float y; double latitude; double longitude; float yaw; float pitch; } muninTapState;
@property (nonatomic) BOOL muninOverrideFov;
@property (nonatomic) float defaultFovPortrait;
@property (nonatomic) float maxFovPortrait;
@property (nonatomic) float defaultFovLandscape;
@property (nonatomic) float maxFovLandscape;
@property (nonatomic) float minFov;
@property (nonatomic) float minFovSpring;
@property (nonatomic) float maxFovSpring;
@property (nonatomic) BOOL forceBumpNextTap;
@property (nonatomic) BOOL forceBumpAll;
@property (nonatomic) BOOL slowMotionBump;
@property (nonatomic) float arJumpOffset;
@property (nonatomic) float arJumpDuration;
@property (nonatomic) float arJumpStart;
@property (nonatomic) float arFallStart;
@property (nonatomic) float arFallOffset;
@property (nonatomic) float arFallDuration;
@property (nonatomic) float arRotateStart;
@property (nonatomic) float arRotateOffset;
@property (nonatomic) float arRotateDuration;
@property (nonatomic) float arPulseStart;
@property (nonatomic) float arPulseOffset;
@property (nonatomic) float arPulseDuration;
@property (nonatomic) float arPulseNumberOfRepeats;
@property (nonatomic) BOOL showRoutelineAnimation;
@property (nonatomic) struct { float r; float g; float b; float a; } overrideAmbient;
@property (nonatomic) struct { float r; float g; float b; float a; } overrideLight1;
@property (nonatomic) struct { float r; float g; float b; float a; } overrideLight2;
@property (nonatomic) struct { float r; float g; float b; float a; } overrideLight3;
@property (nonatomic) float overrideLight1Azimuth;
@property (nonatomic) float overrideLight1Altitude;
@property (nonatomic) float overrideLight2Azimuth;
@property (nonatomic) float overrideLight2Altitude;
@property (nonatomic) float overrideLight3Azimuth;
@property (nonatomic) float overrideLight3Altitude;
@property (nonatomic) BOOL lightingOverrideAmbient;
@property (nonatomic) BOOL lightingOverrideLight1;
@property (nonatomic) BOOL lightingOverrideLight2;
@property (nonatomic) BOOL lightingOverrideLight3;
@property (nonatomic) BOOL lightingEnableAmbient;
@property (nonatomic) BOOL lightingEnableLight1;
@property (nonatomic) BOOL lightingEnableLight2;
@property (nonatomic) BOOL lightingEnableLight3;
@property (nonatomic) BOOL lightingAccelerateTime;
@property (nonatomic) BOOL lightingCameraLocalTime;
@property (nonatomic) BOOL shouldUseSDFGlyphs;
@property (nonatomic) BOOL shouldOverrideUpscaleFactor;
@property (nonatomic) float sdfGlyphShaderUpscaleFactor;
@property (nonatomic) BOOL shouldUseSDFSuperSampling;
@property (nonatomic) BOOL shouldOverrideSuperSampleKernelSize;
@property (nonatomic) float sdfGlyphSuperSampleKernelSize;
@property (nonatomic) BOOL shouldFreezeLayoutCamera;
@property (nonatomic) BOOL enableLabelAnimationTuning;
@property (nonatomic) BOOL tuneForwardLabelAnimation;
@property (nonatomic) unsigned long long labelAnimationTuningElement;
@property (nonatomic) BOOL enableNavRoadSignOrientationDebugging;
@property (nonatomic) BOOL disableContinuousMultiSectionRoutes;
@property (nonatomic) unsigned long long routeDebugPoints;
@property (nonatomic) unsigned int continuousMultiSectionRouteAdditionalOverlap;
@property (nonatomic) BOOL slowAnimations;
@property (nonatomic) BOOL slowTransitions;
@property (nonatomic) BOOL enableTileClipping;
@property (nonatomic) BOOL enableTileClippingDebug;
@property (readonly, nonatomic) float animationTimeMultiplier;
@property (readonly, nonatomic) float transitionTimeMultiplier;
@property (nonatomic) float buildingPOIPitchScaleMinZoom;
@property (nonatomic) float buildingPOIPitchScaleMaxZoom;
@property (nonatomic) float buildingPOIPitchScaleMaxZoomFactor;
@property (nonatomic) float buildingPOIPitchScaleFullHeightAngle;
@property (nonatomic) BOOL compressedBuildingsDisabled;
@property (nonatomic) float daVinciRouteLineMaskScale;
@property (nonatomic) float daVinciRouteLineMaskBlurSigma;
@property (nonatomic) BOOL drawDaVinciHUD;
@property (nonatomic) BOOL daVinciWireframeEnabled;
@property (nonatomic) BOOL daVinciRenderLineGeometry;
@property (nonatomic) BOOL daVinciSSAOEnabled;
@property (nonatomic) float daVinciSSAOIntensity;
@property (nonatomic) BOOL daVinciSSAOOcclusionOnly;
@property (nonatomic) float daVinciSSAOKernelRadius;
@property (nonatomic) float daVinciSSAOTextureScale;
@property (nonatomic) BOOL daVinciSSAOEnableBlur;
@property (nonatomic) BOOL daVinciSSAOHighSampleCountEnabled;
@property (nonatomic) BOOL daVinciSSAODepthAwareBlurEnabled;
@property (nonatomic) BOOL daVinciSSAODepthAwareUpsampleEnabled;
@property (nonatomic) float daVinciSSAODepthThreshold;
@property (nonatomic) unsigned int daVinciSSAOBlurSize;
@property (nonatomic) float daVinciSSAOBlurriness;
@property (nonatomic) float daVinciSSAODepthBlurriness;
@property (nonatomic) float daVinciSSAOUpsampleDepthThreshold;
@property (nonatomic) BOOL daVinciGroundAmbientOcclusionEnabled;
@property (nonatomic) float daVinciGroundAmbientOcclusionIntensity;
@property (nonatomic) float daVinciGroundAmbientOcclusionRadius;
@property (nonatomic) unsigned char daVinciSmoothEdgeMinZ;
@property (nonatomic) float daVinciSmoothEdgeMinZAngle;
@property (nonatomic) unsigned char daVinciSmoothEdgeMaxZ;
@property (nonatomic) float daVinciSmoothEdgeMaxZAngle;
@property (nonatomic) BOOL daVinciColorCorrectionOverride;
@property (nonatomic) float daVinciSaturationRangeMinOverride;
@property (nonatomic) float daVinciSaturationRangeMaxOverride;
@property (nonatomic) float daVinciBrightnessRangeMinOverride;
@property (nonatomic) float daVinciBrightnessRangeMaxOverride;
@property (nonatomic) BOOL daVinciPlanarOverride;
@property (nonatomic) float daVinciPlanarPixelPerMeterOverride;
@property (nonatomic) float daVinciPlanarTilingOverride;
@property (nonatomic) float daVinciPlanarOffsetOverride;
@property (nonatomic) BOOL daVinciShowCenterLineRoads;
@property (nonatomic) BOOL daVinciEnableRibbonAntialiasing;
@property (nonatomic) BOOL daVinciOverrideElevationScaling;
@property (nonatomic) float daVinciElevationScalingMinZFactor;
@property (nonatomic) float daVinciElevationScalingMaxZFactor;
@property (nonatomic) unsigned char daVinciElevationScalingMinZ;
@property (nonatomic) unsigned char daVinciElevationScalingMaxZ;
@property (nonatomic) BOOL drawDaVinciElevationScalingDebug;
@property (nonatomic) BOOL daVinciElevationScalingNormalsOnly;
@property (nonatomic) BOOL daVinciGlobeLighting;
@property (nonatomic) BOOL daVinciWaterEnabled;
@property (nonatomic) BOOL daVinciResourceOverrideEnabled;
@property (nonatomic) BOOL daVinciASTCTextureSideLoadEnabled;
@property (nonatomic) BOOL daVinciLightingStylesOverrideEnabled;
@property (nonatomic) BOOL daVinciShowMissingMaterials;
@property (nonatomic) BOOL daVinciShowStackingVenues;
@property (nonatomic) BOOL daVinciTintLODLevels;
@property (nonatomic) BOOL daVinciWaterDepthCueingEnabled;
@property (nonatomic) BOOL daVinciWaterRefractionEnabled;
@property (nonatomic) float daVinciWaterTurbidity;
@property (nonatomic) unsigned short daVinciDebugRasterStyleAttribute;
@property (nonatomic) BOOL daVinciAridityGroundTintingEnabled;
@property (nonatomic) BOOL daVinciTemperatureGroundTintingEnabled;
@property (nonatomic) BOOL daVinciMaterialRastersEnabled;
@property (nonatomic) float daVinciTransitionDuration;
@property (nonatomic) BOOL daVinciForceElevatedGround;
@property (nonatomic) BOOL daVinciRoundBuildings;
@property (nonatomic) float daVinciBuildingRoundingRadius;
@property (nonatomic) BOOL daVinciColorBuildings;
@property (nonatomic) BOOL daVinciBuildingHeights;
@property (nonatomic) BOOL daVinciAdvancedLightingEnabled;
@property (nonatomic) BOOL daVinciEnablePBR;
@property (nonatomic) BOOL daVinciPitchedGlobeTileSelection;
@property (nonatomic) float daVinciGlobeSplinedMaxZoom;
@property (nonatomic) BOOL daVinciGlobeScalingCorrection;
@property (nonatomic) long long shadowMapResolution;
@property (nonatomic) float daVinciShadowIntensity;
@property (nonatomic) BOOL daVinciVarianceShadowsEnabled;
@property (nonatomic) BOOL daVinciPitchScaleEnabled;
@property (nonatomic) float daVinciAtmosphereMaxHeight;
@property (nonatomic) float daVinciAtmosphereColorMidpoint;
@property (nonatomic) float daVinciHorizonGlowSharpness;
@property (nonatomic) float daVinciHorizonGlowStrength;
@property (nonatomic) BOOL daVinciLightingDebugAlbedoOnly;
@property (nonatomic) BOOL daVinciLightingDebugLightsOnly;
@property (nonatomic) BOOL daVinciLightingDebugShowOverexposure;
@property (nonatomic) BOOL daVinciLightingDebugShowNormals;
@property (nonatomic) BOOL daVinciRenderingDebugShowUVs;
@property (nonatomic) BOOL daVinciLightingDebugShowLitSphere;
@property (nonatomic) BOOL daVinciCameraController;
@property (nonatomic) BOOL daVinciBiasLatitudeGlobeTileSelection;
@property (nonatomic) BOOL daVinciCameraControllerForceMercatorZoom;
@property (nonatomic) BOOL daVinciUseCollisionMesh;
@property (nonatomic) BOOL daVinciEntityDebugHighlighting;
@property (nonatomic) BOOL daVinciDrawCollisionMesh;
@property (nonatomic) BOOL daVinciTintBandFillWireframeEnabled;
@property (nonatomic) BOOL daVinciTintBandStrokeWireframeEnabled;
@property (nonatomic) BOOL daVinciTintBandStrokeDistanceDebugEnabled;
@property (nonatomic) BOOL relaxTiltLimits;
@property (nonatomic) float maxElevatedStrokeWidth;
@property (nonatomic) BOOL debugCaptureNextGPUFrame;
@property (copy, nonatomic) NSString *debugGPUFrameCaptureURL;
@property (nonatomic) float routeLineMaskWidth;
@property (nonatomic) float routeLineMaskAlphaFalloff;
@property (nonatomic) BOOL enableARCameraDebugOverlay;
@property (nonatomic) float arCameraElevationOffset;
@property (nonatomic) BOOL arEnableRouteLineDebugMeshes;
@property (nonatomic) BOOL arShowAllLabels;
@property (nonatomic) BOOL arForceOccludedStyling;
@property (nonatomic) BOOL arLabelingStateOverlay;
@property (nonatomic) BOOL arDebugMiniMap;
@property (nonatomic) BOOL arEnableEnvironmentMap;
@property (nonatomic) float arDebugMiniMapMapRectSize;
@property (nonatomic) float arDebugMiniMapScreenRectSize;
@property (nonatomic) float arDebugMiniMapScreenRectXOffset;
@property (nonatomic) float arDebugMiniMapScreenRectYOffset;
@property (nonatomic) unsigned int arDebugScenePoiType;
@property (nonatomic) unsigned char arDebugSceneForcedLayoutType;
@property (nonatomic) float arDebugSceneFeatureDistance;
@property (nonatomic) float arDebugSceneFeatureHeading;
@property (copy, nonatomic) NSString *arDebugSceneFeatureText;
@property (nonatomic) unsigned char arDebugSceneFeatureType;
@property (nonatomic) BOOL arRenderAvoidanceObjects;
@property (nonatomic) BOOL arRenderAvoidanceObjectsIntersection;
@property (nonatomic) BOOL arIsArrivalAnimationEnabled;
@property (nonatomic) float arManeuverDebugElevationOffset;
@property (nonatomic) float arDebugStylingBaseScalingFactor;
@property (nonatomic) float arDebugStylingPOIIconScaleFactor;
@property (nonatomic) float arDebugStylingPOIEnvMapIntensity;
@property (nonatomic) float arDebugStylingPOILightIntensity;
@property (nonatomic) BOOL arDebugLockLocalizingState;
@property (nonatomic) BOOL arForceLabelsViewOriented;
@property (nonatomic) BOOL arAlwaysShowOneContinueLabel;
@property (nonatomic) BOOL arDebugUseLastStepAsArrivalLocation;
@property (nonatomic) BOOL arDebugDrawMeshFeatureBounds;
@property (nonatomic) BOOL arDebugDrawLabelFeatureBounds;
@property (nonatomic) float arDebugArrivalPointSphereScaleX;
@property (nonatomic) float arDebugArrivalPointSphereScaleY;
@property (nonatomic) float arDebugArrivalPointSphereScaleZ;
@property (nonatomic) unsigned long long mapDisplayStyleOverride;
@property (nonatomic) BOOL arEnableCameraFeed;
@property (nonatomic) BOOL enableWindshieldOverrideButton;
@property (nonatomic) BOOL shouldForceWindshieldMode;
@property (nonatomic) BOOL enable3DPuck;
@property (nonatomic) float routeWindshieldAnimationTime;
@property (nonatomic) float routeIsCoveredAnimationTime;
@property (nonatomic) BOOL showGRLDebugInfo;
@property (nonatomic) BOOL showTrafficOffset;
@property (nonatomic) BOOL enableInjectedAssets;
@property (nonatomic) BOOL enableMipMaps;
@property (nonatomic) unsigned int anisotropy;
@property (nonatomic) float farClipPlaneFactor;
@property (nonatomic) BOOL enablePuckRouteLineSnapping;
@property (nonatomic) BOOL enableDOF;
@property (nonatomic) float dofStrength;
@property (readonly, nonatomic, getter=isAnyLogicConsoleEnabled) BOOL anyLogicConsoleEnabled;

+ (id)keyPathsForValuesAffectingPreserveModelTile;
+ (id)sharedSettings;

- (BOOL)shouldDrawDebug;
- (const struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; BOOL x4; } *)displayStyleOverride;
- (void)setHighlightRouteLineSnappingRegion:(BOOL)a0;
- (struct VKDebugLabelAnimationParameters { struct VKDebugLabelAnimationItemParameters { float x0; float x1; float x2; unsigned long long x3; } x0; struct VKDebugLabelAnimationItemParameters { float x0; float x1; float x2; unsigned long long x3; } x1; struct VKDebugLabelAnimationItemParameters { float x0; float x1; float x2; unsigned long long x3; } x2; struct VKDebugLabelAnimationItemParameters { float x0; float x1; float x2; unsigned long long x3; } x3; } *)showLabelAnimationParams;
- (id)init;
- (void)setArDebugElevationOffset:(float)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)isPerformanceGroupShown:(unsigned int)a0;
- (BOOL)isLogicConsoleEnabled:(unsigned long long)a0;
- (void)showPerformanceGroup:(unsigned int)a0;
- (id)nameForPerformanceGroup:(unsigned int)a0;
- (BOOL)overlaysShouldDrawDebug;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)hidePerformanceGroup:(unsigned int)a0;
- (void)setLogicConsole:(unsigned long long)a0 enabled:(BOOL)a1;
- (struct VKDebugLabelAnimationParameters { struct VKDebugLabelAnimationItemParameters { float x0; float x1; float x2; unsigned long long x3; } x0; struct VKDebugLabelAnimationItemParameters { float x0; float x1; float x2; unsigned long long x3; } x1; struct VKDebugLabelAnimationItemParameters { float x0; float x1; float x2; unsigned long long x3; } x2; struct VKDebugLabelAnimationItemParameters { float x0; float x1; float x2; unsigned long long x3; } x3; } *)hideLabelAnimationParams;
- (void)removeTileToPaint;
- (void)addTileToPaint:(struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })a0;
- (unsigned int)numPerformanceGroups;

@end
