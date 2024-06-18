@interface VKBuildingGroup : VKPolygonalItemGroup {
    struct optional<md::MeshSet<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh, ggl::BuildingFlatStroke::DefaultVbo>> { BOOL _hasValue; union ValueUnion { unsigned char data[184]; struct MeshSet<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh, ggl::BuildingFlatStroke::DefaultVbo> { struct vector<std::pair<unsigned short, unsigned int>, std::allocator<std::pair<unsigned short, unsigned int>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<unsigned short, unsigned int> *, std::allocator<std::pair<unsigned short, unsigned int>>> { void *__value_; } __end_cap_; } _vertexAndIndexCounts; struct vector<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh>, std::allocator<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh> *, std::allocator<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh>>> { void *__value_; } __end_cap_; } _meshes; struct DataWrite<ggl::BuildingFlatStroke::DefaultVbo> { struct BufferMemory { struct ResourceAccessor *_accessor; struct BufferData *_user; struct Range<unsigned long> { unsigned long long _min; unsigned long long _max; } _range; int _access; int _sync; char *_data; } _memory; } _vertexDataWrite; struct DataWrite<unsigned short> { struct BufferMemory { struct ResourceAccessor *_accessor; struct BufferData *_user; struct Range<unsigned long> { unsigned long long _min; unsigned long long _max; } _range; int _access; int _sync; char *_data; } _memory; } _indexDataWrite; unsigned char _meshIndex; unsigned short _meshVertexOffset; unsigned int _meshIndexOffset; struct MeshSetStorage *_storage; struct unique_ptr<md::MeshSetStorage, std::default_delete<md::MeshSetStorage>> { struct __compressed_pair<md::MeshSetStorage *, std::default_delete<md::MeshSetStorage>> { struct MeshSetStorage *__value_; } __ptr_; } _internalStorage; struct shared_ptr<md::MeshSetStorageClient> { struct MeshSetStorageClient *__ptr_; struct __shared_weak_count *__cntrl_; } _storageClient; } type; } _value; } _strokeMeshInfo;
    struct optional<md::MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo>> { BOOL _hasValue; union ValueUnion { unsigned char data[184]; struct MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo> { struct vector<std::pair<unsigned short, unsigned int>, std::allocator<std::pair<unsigned short, unsigned int>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<unsigned short, unsigned int> *, std::allocator<std::pair<unsigned short, unsigned int>>> { void *__value_; } __end_cap_; } _vertexAndIndexCounts; struct vector<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>, std::allocator<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh> *, std::allocator<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>>> { void *__value_; } __end_cap_; } _meshes; struct DataWrite<ggl::PolygonBase::CompressedVbo> { struct BufferMemory { struct ResourceAccessor *_accessor; struct BufferData *_user; struct Range<unsigned long> { unsigned long long _min; unsigned long long _max; } _range; int _access; int _sync; char *_data; } _memory; } _vertexDataWrite; struct DataWrite<unsigned short> { struct BufferMemory { struct ResourceAccessor *_accessor; struct BufferData *_user; struct Range<unsigned long> { unsigned long long _min; unsigned long long _max; } _range; int _access; int _sync; char *_data; } _memory; } _indexDataWrite; unsigned char _meshIndex; unsigned short _meshVertexOffset; unsigned int _meshIndexOffset; struct MeshSetStorage *_storage; struct unique_ptr<md::MeshSetStorage, std::default_delete<md::MeshSetStorage>> { struct __compressed_pair<md::MeshSetStorage *, std::default_delete<md::MeshSetStorage>> { struct MeshSetStorage *__value_; } __ptr_; } _internalStorage; struct shared_ptr<md::MeshSetStorageClient> { struct MeshSetStorageClient *__ptr_; struct __shared_weak_count *__cntrl_; } _storageClient; } type; } _value; } _fillMeshInfoForPointyRoofs;
    struct vector<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh>, std::allocator<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh> *, std::allocator<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh>>> { void *__value_; } __end_cap_; } _strokeMeshes;
    struct vector<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>, std::allocator<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh> *, std::allocator<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>>> { void *__value_; } __end_cap_; } _fillMeshesForPointyRoofs;
    struct unique_ptr<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>, std::default_delete<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>>> { struct __compressed_pair<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh> *, std::default_delete<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>>> { void *__value_; } __ptr_; } _extrusionFillMeshVendor;
    struct unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> { struct __compressed_pair<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh> *, std::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> { void *__value_; } __ptr_; } _extrusionStrokeMeshVendor;
    struct unique_ptr<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>, std::default_delete<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>>> { struct __compressed_pair<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh> *, std::default_delete<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>>> { void *__value_; } __ptr_; } _pointyRoofFillMeshVendor;
    struct unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> { struct __compressed_pair<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh> *, std::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> { void *__value_; } __ptr_; } _pointyRoofStrokeMeshVendor;
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> { struct vector<std::vector<FeatureRange>, std::allocator<std::vector<FeatureRange>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<FeatureRange> *, std::allocator<std::vector<FeatureRange>>> { void *__value_; } __end_cap_; } __elems_[16]; } _extrusionFillCullingGroups;
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> { struct vector<std::vector<FeatureRange>, std::allocator<std::vector<FeatureRange>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<FeatureRange> *, std::allocator<std::vector<FeatureRange>>> { void *__value_; } __end_cap_; } __elems_[16]; } _extrusionStrokeCullingGroups;
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> { struct vector<std::vector<FeatureRange>, std::allocator<std::vector<FeatureRange>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<FeatureRange> *, std::allocator<std::vector<FeatureRange>>> { void *__value_; } __end_cap_; } __elems_[16]; } _fillCullingGroupsForPointyRoofs;
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> { struct vector<std::vector<FeatureRange>, std::allocator<std::vector<FeatureRange>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<FeatureRange> *, std::allocator<std::vector<FeatureRange>>> { void *__value_; } __end_cap_; } __elems_[16]; } _pointyRoofFillCullingGroups;
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> { struct vector<std::vector<FeatureRange>, std::allocator<std::vector<FeatureRange>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<FeatureRange> *, std::allocator<std::vector<FeatureRange>>> { void *__value_; } __end_cap_; } __elems_[16]; } _pointyRoofStrokeCullingGroups;
    struct vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>> *, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> { void *__value_; } __end_cap_; } _styleQueries;
    struct vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>> *, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> { void *__value_; } __end_cap_; } _flatRoofStyleQueries;
    struct vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>> *, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> { void *__value_; } __end_cap_; } _selectedStyleQueries;
    struct vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>> *, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> { void *__value_; } __end_cap_; } _selectedFlatRoofStyleQueries;
}

- (unsigned char)maxAttributeSetsPerGroup;
- (void)didFinishAddingData;
- (id)initWithStyleQuery:(void *)a0 tileZoom:(float)a1 fixedAroundCentroid:(const void *)a2 contentScale:(float)a3;
- (void)addExtrusionForBuilding:(void *)a0 index:(unsigned long long)a1 ofTotal:(unsigned long long)a2;
- (const void *)commitRangesToExtrusionFillRenderItemBatcher:(void *)a0 forMeshAtIndex:(unsigned long long)a1 cullingMask:(unsigned int)a2 featureIdPredicate:(struct function<bool (unsigned long long)> { struct __value_func<bool (unsigned long long)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a3;
- (const void *)commitRangesToPointyRoofTopRenderItemBatcher:(void *)a0 forMeshAtIndex:(unsigned long long)a1 cullingMask:(unsigned int)a2 featureIdPredicate:(struct function<bool (unsigned long long)> { struct __value_func<bool (unsigned long long)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a3;
- (const void *)commitRangesToExtrusionStrokeRenderItemBatcher:(void *)a0 forMeshAtIndex:(unsigned long long)a1 cullingMask:(unsigned int)a2 featureIdPredicate:(struct function<bool (unsigned long long)> { struct __value_func<bool (unsigned long long)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a3;
- (void)updateWithStyleManager:(const void *)a0;
- (void)addBuilding:(void *)a0 index:(unsigned long long)a1 ofTotal:(unsigned long long)a2 accessor:(struct ResourceAccessor { void /* function */ **x0; } *)a3 triangulator:(void *)a4 prepareExtrusion:(BOOL)a5 forRoofStyle:(unsigned char)a6 scaleThreshold:(float)a7;
- (void)prepareForBuilding:(void *)a0 forRoofStyle:(unsigned char)a1 scaleThreshold:(float)a2;
- (void)willAddDataWithAccessor:(struct ResourceAccessor { void /* function */ **x0; } *)a0;
- (const void *)extrusionStrokeMeshVendor;
- (const void *)extrusionFillMeshVendor;
- (const void *)pointyRoofFillMeshVendor;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const void *)pointyRoofStrokeMeshVendor;
- (BOOL)canConstructPointyRoofForPolygon:(void *)a0 building:(void *)a1 buildingModel:(unsigned char)a2 scaleThreshold:(float)a3;
- (void *)strokeMeshes;
- (const void *)commitRangesToPointyRoofFillRenderItemBatcher:(void *)a0 forMeshAtIndex:(unsigned long long)a1 cullingMask:(unsigned int)a2 featureIdPredicate:(struct function<bool (unsigned long long)> { struct __value_func<bool (unsigned long long)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a3;
- (BOOL)addPointyRoofForBuilding:(void *)a0 buildingModel:(unsigned char)a1 scaleThreshold:(float)a2 styleIndex:(float)a3;
- (const void *)commitRangesToPointyRoofStrokeRenderItemBatcher:(void *)a0 forMeshAtIndex:(unsigned long long)a1 cullingMask:(unsigned int)a2 featureIdPredicate:(struct function<bool (unsigned long long)> { struct __value_func<bool (unsigned long long)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a3;
- (void *)fillMeshesForPointyRoofs;
- (void *)styleQueriesForPointyRoofs:(BOOL)a0 selected:(BOOL)a1;

@end