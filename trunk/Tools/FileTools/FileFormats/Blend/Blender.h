#ifndef _Blender_h_
#define _Blender_h_
// Generated from a Blender(254) file.

#ifdef near
#undef near
#endif
#ifdef far
#undef far
#endif

namespace Blender
{

struct FileData;
struct GPUTexture;
struct anim;
struct RenderResult;
struct ImBuf;
struct VFontData;
struct GHash;
struct Path;
struct SelBox;
struct EditFont;
struct EditMesh;
struct Cloth;
struct BVHTree;
struct DerivedMesh;
struct BVHTreeFromMesh;
struct SculptSession;
struct RNG;
struct PTCacheEdit;
struct BodyPoint;
struct BodySpring;
struct SBScratch;
struct SceneStats;
struct DagForest;
struct RenderInfo;
struct RetopoViewData;
struct ViewDepths;
struct SmoothViewStore;
struct wmTimer;
struct FileList;
struct FileLayout;
struct PanelType;
struct uiLayout;
struct SpaceType;
struct ARegionType;
struct Particle;
struct bNodePreview;
struct uiBlock;
struct bNodeType;
struct ParticleCacheKey;
struct KDTree;
struct ParticleDrawData;
struct LinkNode;
struct wmEvent;
struct wmSubWindow;
struct wmGesture;
struct PointerRNA;
struct wmOperatorType;
struct FLUID_3D;
struct WTURBULENCE;
struct Link;
struct LinkData;
struct ListBase;
struct vec2s;
struct vec2f;
struct vec2i;
struct vec2d;
struct vec3i;
struct vec3f;
struct vec3d;
struct vec4i;
struct vec4f;
struct vec4d;
struct rcti;
struct rctf;
struct IDPropertyData;
struct IDProperty;
struct ID;
struct Library;
struct PreviewImage;
struct IpoDriver;
struct IpoCurve;
struct Ipo;
struct KeyBlock;
struct Key;
struct TextLine;
struct TextMarker;
struct Text;
struct PackedFile;
struct Camera;
struct ImageUser;
struct Image;
struct MTex;
struct PluginTex;
struct CBData;
struct ColorBand;
struct EnvMap;
struct PointDensity;
struct VoxelData;
struct Tex;
struct TexMapping;
struct Lamp;
struct VolumeSettings;
struct Material;
struct VFont;
struct MetaElem;
struct MetaBall;
struct BezTriple;
struct BPoint;
struct Nurb;
struct CharInfo;
struct TextBox;
struct EditNurb;
struct Curve;
struct Mesh;
struct TFace;
struct MFace;
struct MEdge;
struct MDeformWeight;
struct MDeformVert;
struct MVert;
struct MCol;
struct MTexPoly;
struct MLoopUV;
struct MLoopCol;
struct MSticky;
struct MSelect;
struct MTFace;
struct MFloatProperty;
struct MIntProperty;
struct MStringProperty;
struct OrigSpaceFace;
struct MDisps;
struct MultiresCol;
struct MultiresColFace;
struct MultiresFace;
struct MultiresEdge;
struct MultiresLevel;
struct Multires;
struct PartialVisibility;
struct ModifierData;
struct SubsurfModifierData;
struct LatticeModifierData;
struct CurveModifierData;
struct BuildModifierData;
struct MaskModifierData;
struct ArrayModifierData;
struct MirrorModifierData;
struct EdgeSplitModifierData;
struct BevelModifierData;
struct BMeshModifierData;
struct SmokeModifierData;
struct DisplaceModifierData;
struct UVProjectModifierData;
struct DecimateModifierData;
struct SmoothModifierData;
struct CastModifierData;
struct WaveModifierData;
struct ArmatureModifierData;
struct HookModifierData;
struct SoftbodyModifierData;
struct ClothModifierData;
struct CollisionModifierData;
struct SurfaceModifierData;
struct BooleanModifierData;
struct MDefInfluence;
struct MDefCell;
struct MeshDeformModifierData;
struct ParticleSystemModifierData;
struct ParticleInstanceModifierData;
struct ExplodeModifierData;
struct MultiresModifierData;
struct FluidsimModifierData;
struct ShrinkwrapModifierData;
struct SimpleDeformModifierData;
struct ShapeKeyModifierData;
struct SolidifyModifierData;
struct ScrewModifierData;
struct EditLatt;
struct Lattice;
struct bDeformGroup;
struct BoundBox;
struct Object;
struct ObHook;
struct DupliObject;
struct PartDeflect;
struct EffectorWeights;
struct PTCacheMem;
struct PointCache;
struct SBVertex;
struct BulletSoftBody;
struct SoftBody;
struct FluidsimSettings;
struct World;
struct Base;
struct AviCodecData;
struct QuicktimeCodecData;
struct QuicktimeCodecSettings;
struct FFMpegCodecData;
struct AudioData;
struct SceneRenderLayer;
struct RenderData;
struct RenderProfile;
struct GameDome;
struct GameFraming;
struct GameData;
struct TimeMarker;
struct Paint;
struct ImagePaintSettings;
struct ParticleBrushData;
struct ParticleEditSettings;
struct TransformOrientation;
struct Sculpt;
struct VPaint;
struct ToolSettings;
struct bStats;
struct UnitSettings;
struct PhysicsSettings;
struct Scene;
struct BGpic;
struct RegionView3D;
struct View3D;
struct View2D;
struct SpaceLink;
struct SpaceInfo;
struct SpaceIpo;
struct SpaceButs;
struct SpaceSeq;
struct FileSelectParams;
struct SpaceFile;
struct SpaceOops;
struct SpaceImage;
struct SpaceNla;
struct SpaceText;
struct Script;
struct SpaceScript;
struct SpaceTimeCache;
struct SpaceTime;
struct SpaceNode;
struct SpaceLogic;
struct SpaceImaSel;
struct ConsoleLine;
struct SpaceConsole;
struct SpaceUserPref;
struct SpaceSound;
struct uiFont;
struct uiFontStyle;
struct uiStyle;
struct uiWidgetColors;
struct uiWidgetStateColors;
struct ThemeUI;
struct ThemeSpace;
struct ThemeWireColor;
struct bTheme;
struct bAddon;
struct SolidLight;
struct UserDef;
struct bScreen;
struct ScrVert;
struct ScrEdge;
struct Panel;
struct ScrArea;
struct ARegion;
struct FileGlobal;
struct StripElem;
struct StripCrop;
struct StripTransform;
struct StripColorBalance;
struct StripProxy;
struct Strip;
struct PluginSeq;
struct Sequence;
struct MetaStack;
struct Editing;
struct WipeVars;
struct GlowVars;
struct TransformVars;
struct SolidColorVars;
struct SpeedControlVars;
struct Effect;
struct BuildEff;
struct PartEff;
struct WaveEff;
struct TreeStoreElem;
struct TreeStore;
struct bProperty;
struct bNearSensor;
struct bMouseSensor;
struct bTouchSensor;
struct bKeyboardSensor;
struct bPropertySensor;
struct bActuatorSensor;
struct bDelaySensor;
struct bCollisionSensor;
struct bRadarSensor;
struct bRandomSensor;
struct bRaySensor;
struct bArmatureSensor;
struct bMessageSensor;
struct bSensor;
struct bJoystickSensor;
struct bExpressionCont;
struct bPythonCont;
struct bController;
struct bAddObjectActuator;
struct bActionActuator;
struct Sound3D;
struct bSoundActuator;
struct bEditObjectActuator;
struct bSceneActuator;
struct bPropertyActuator;
struct bObjectActuator;
struct bIpoActuator;
struct bCameraActuator;
struct bConstraintActuator;
struct bGroupActuator;
struct bRandomActuator;
struct bMessageActuator;
struct bGameActuator;
struct bVisibilityActuator;
struct bTwoDFilterActuator;
struct bParentActuator;
struct bStateActuator;
struct bArmatureActuator;
struct bActuator;
struct bSound;
struct GroupObject;
struct Group;
struct Bone;
struct bArmature;
struct bMotionPathVert;
struct bMotionPath;
struct bAnimVizSettings;
struct bPoseChannel;
struct bPose;
struct bIKParam;
struct bItasc;
struct bActionGroup;
struct bAction;
struct bDopeSheet;
struct SpaceAction;
struct bActionChannel;
struct bConstraintChannel;
struct bConstraint;
struct bConstraintTarget;
struct bPythonConstraint;
struct bKinematicConstraint;
struct bSplineIKConstraint;
struct bTrackToConstraint;
struct bRotateLikeConstraint;
struct bLocateLikeConstraint;
struct bSizeLikeConstraint;
struct bSameVolumeConstraint;
struct bTransLikeConstraint;
struct bMinMaxConstraint;
struct bActionConstraint;
struct bLockTrackConstraint;
struct bDampTrackConstraint;
struct bFollowPathConstraint;
struct bStretchToConstraint;
struct bRigidBodyJointConstraint;
struct bClampToConstraint;
struct bChildOfConstraint;
struct bTransformConstraint;
struct bPivotConstraint;
struct bLocLimitConstraint;
struct bRotLimitConstraint;
struct bSizeLimitConstraint;
struct bDistLimitConstraint;
struct bShrinkwrapConstraint;
struct bActionModifier;
struct bActionStrip;
struct bNodeStack;
struct bNodeSocket;
struct bNode;
struct bNodeLink;
struct bNodeTree;
struct NodeImageAnim;
struct NodeBlurData;
struct NodeDBlurData;
struct NodeBilateralBlurData;
struct NodeHueSat;
struct NodeImageFile;
struct NodeChroma;
struct NodeTwoXYs;
struct NodeTwoFloats;
struct NodeGeometry;
struct NodeVertexCol;
struct NodeDefocus;
struct NodeScriptDict;
struct NodeGlare;
struct NodeTonemap;
struct NodeLensDist;
struct NodeColorBalance;
struct NodeColorspill;
struct TexNodeOutput;
struct CurveMapPoint;
struct CurveMap;
struct CurveMapping;
struct Histogram;
struct Scopes;
struct BrushClone;
struct Brush;
struct CustomDataLayer;
struct CustomDataExternal;
struct CustomData;
struct HairKey;
struct ParticleKey;
struct BoidParticle;
struct ChildParticle;
struct ParticleTarget;
struct ParticleDupliWeight;
struct ParticleData;
struct SPHFluidSettings;
struct ParticleSettings;
struct ParticleSystem;
struct ClothSimSettings;
struct ClothCollSettings;
struct bGPDspoint;
struct bGPDstroke;
struct bGPDframe;
struct bGPDlayer;
struct bGPdata;
struct Report;
struct ReportList;
struct ReportTimerInfo;
struct wmWindowManager;
struct wmWindow;
struct wmKeyMapItem;
struct wmKeyMap;
struct wmKeyConfig;
struct wmOperator;
struct FModifier;
struct FMod_Generator;
struct FMod_FunctionGenerator;
struct FCM_EnvelopeData;
struct FMod_Envelope;
struct FMod_Cycles;
struct FMod_Python;
struct FMod_Limits;
struct FMod_Noise;
struct FMod_Stepped;
struct DriverTarget;
struct DriverVar;
struct ChannelDriver;
struct FPoint;
struct FCurve;
struct AnimMapPair;
struct AnimMapper;
struct NlaStrip;
struct NlaTrack;
struct KS_Path;
struct KeyingSet;
struct AnimOverride;
struct AnimData;
struct IdAdtTemplate;
struct BoidRule;
struct BoidRuleGoalAvoid;
struct BoidRuleAvoidCollision;
struct BoidRuleFollowLeader;
struct BoidRuleAverageSpeed;
struct BoidRuleFight;
struct BoidData;
struct BoidState;
struct BoidSettings;
struct SmokeDomainSettings;
struct SmokeFlowSettings;
struct SmokeCollSettings;



typedef struct Link
{
	Link*           next;
	Link*           prev;
} Link;

typedef struct LinkData
{
	LinkData*           next;
	LinkData*           prev;
	void*               data;
} LinkData;

typedef struct ListBase
{
	void*           first;
	void*           last;
} ListBase;

typedef struct vec2s
{
	short           x;
	short           y;
} vec2s;

typedef struct vec2f
{
	float           x;
	float           y;
} vec2f;

typedef struct vec2i
{
	int           x;
	int           y;
} vec2i;

typedef struct vec2d
{
	double           x;
	double           y;
} vec2d;

typedef struct vec3i
{
	int           x;
	int           y;
	int           z;
} vec3i;

typedef struct vec3f
{
	float           x;
	float           y;
	float           z;
} vec3f;

typedef struct vec3d
{
	double           x;
	double           y;
	double           z;
} vec3d;

typedef struct vec4i
{
	int           x;
	int           y;
	int           z;
	int           w;
} vec4i;

typedef struct vec4f
{
	float           x;
	float           y;
	float           z;
	float           w;
} vec4f;

typedef struct vec4d
{
	double           x;
	double           y;
	double           z;
	double           w;
} vec4d;

typedef struct rcti
{
	int           xmin;
	int           xmax;
	int           ymin;
	int           ymax;
} rcti;

typedef struct rctf
{
	float           xmin;
	float           xmax;
	float           ymin;
	float           ymax;
} rctf;

typedef struct ID
{
	void*                 next;
	void*                 prev;
	ID*                   newid;
	Library*              lib;
	char                 name[24];
	short                us;
	short                flag;
	int                  icon_id;
	IDProperty*           properties;
} ID;

typedef struct PreviewImage
{
	int             w[2];
	int             h[2];
	short           changed[2];
	short           changed_timestamp[2];
	int*             rect[2];
} PreviewImage;

typedef struct IpoDriver
{
	Object*           ob;
	short            blocktype;
	short            adrcode;
	short            type;
	short            flag;
	char             name[128];
} IpoDriver;

typedef struct KeyBlock
{
	KeyBlock*           next;
	KeyBlock*           prev;
	float              pos;
	float              curval;
	short              type;
	short              adrcode;
	short              relative;
	short              flag;
	int                totelem;
	int                pad2;
	void*               data;
	float*              weights;
	char               name[32];
	char               vgroup[32];
	float              slidermin;
	float              slidermax;
} KeyBlock;

typedef struct TextLine
{
	TextLine*           next;
	TextLine*           prev;
	char*               line;
	char*               format;
	int                len;
	int                blen;
} TextLine;

typedef struct TextMarker
{
	TextMarker*           next;
	TextMarker*           prev;
	int                  lineno;
	int                  start;
	int                  end;
	int                  pad1;
	int                  group;
	int                  flags;
	char                 color[4];
	char                 pad[4];
} TextMarker;

typedef struct PackedFile
{
	int            size;
	int            seek;
	void*           data;
} PackedFile;

typedef struct ImageUser
{
	int             framenr;
	int             frames;
	int             offset;
	int             sfra;
	short           fie_ima;
	short           cycl;
	short           flag;
	short           ok;
	short           multi_index;
	short           layer;
	short           pass;
	short           menunr;
	Scene*           scene;
} ImageUser;

typedef struct MTex
{
	short            texco;
	short            mapto;
	short            maptoneg;
	short            blendtype;
	Object*           object;
	Tex*              tex;
	char             uvname[32];
	char             projx;
	char             projy;
	char             projz;
	char             mapping;
	float            ofs[3];
	float            size[3];
	float            rot;
	short            texflag;
	short            colormodel;
	short            pmapto;
	short            pmaptoneg;
	short            normapspace;
	short            which_output;
	char             brush_map_mode;
	char             pad[7];
	float            r;
	float            g;
	float            b;
	float            k;
	float            def_var;
	float            rt;
	float            colfac;
	float            varfac;
	float            norfac;
	float            dispfac;
	float            warpfac;
	float            colspecfac;
	float            mirrfac;
	float            alphafac;
	float            difffac;
	float            specfac;
	float            emitfac;
	float            hardfac;
	float            raymirrfac;
	float            translfac;
	float            ambfac;
	float            colemitfac;
	float            colreflfac;
	float            coltransfac;
	float            densfac;
	float            scatterfac;
	float            reflfac;
	float            timefac;
	float            lengthfac;
	float            clumpfac;
	float            kinkfac;
	float            roughfac;
	float            padensfac;
	float            lifefac;
	float            sizefac;
	float            ivelfac;
	float            pvelfac;
	float            shadowfac;
	float            zenupfac;
	float            zendownfac;
	float            blendfac;
} MTex;

typedef struct PluginTex
{
	char            name[160];
	void*            handle;
	char*            pname;
	char*            stnames;
	int             stypes;
	int             vars;
	void*            varstr;
	float*           result;
	float*           cfra;
	float           data[32];
	int             (*doit)();
	void            (*instance_init)();
	void            (*callback)();
	int             version;
	int             pad;
} PluginTex;

typedef struct CBData
{
	float           r;
	float           g;
	float           b;
	float           a;
	float           pos;
	int             cur;
} CBData;

typedef struct EnvMap
{
	Object*           object;
	Image*            ima;
	struct ImBuf*     cube[6];
	float            imat[4][4];
	float            obimat[3][3];
	short            type;
	short            stype;
	float            clipsta;
	float            clipend;
	float            viewscale;
	int              notlay;
	short            cuberes;
	short            depth;
	int              ok;
	int              lastframe;
	short            recalc;
	short            lastsize;
} EnvMap;

typedef struct PointDensity
{
	short               flag;
	short               falloff_type;
	float               falloff_softness;
	float               radius;
	short               source;
	short               color_source;
	int                 totpoints;
	int                 pdpad;
	Object*              object;
	int                 psys;
	short               psys_cache_space;
	short               ob_cache_space;
	void*                point_tree;
	float*               point_data;
	float               noise_size;
	short               noise_depth;
	short               noise_influence;
	short               noise_basis;
	short               pdpad3[3];
	float               noise_fac;
	float               speed_scale;
	ColorBand*           coba;
} PointDensity;

typedef struct VoxelData
{
	int              resol[3];
	int              interp_type;
	short            file_format;
	short            flag;
	short            extend;
	short            smoked_type;
	Object*           object;
	float            int_multiplier;
	int              still_frame;
	char             source_path[240];
	float*            dataset;
	int              cachedframe;
	int              ok;
} VoxelData;

typedef struct TexMapping
{
	float            loc[3];
	float            rot[3];
	float            size[3];
	int              flag;
	float            mat[4][4];
	float            min[3];
	float            max[3];
	Object*           ob;
} TexMapping;

typedef struct VolumeSettings
{
	float           density;
	float           emission;
	float           scattering;
	float           reflection;
	float           emission_col[3];
	float           transmission_col[3];
	float           reflection_col[3];
	float           density_scale;
	float           depth_cutoff;
	float           asymmetry;
	short           stepsize_type;
	short           shadeflag;
	short           shade_type;
	short           precache_resolution;
	float           stepsize;
	float           ms_diff;
	float           ms_intensity;
	float           ms_spread;
} VolumeSettings;

typedef struct MetaElem
{
	MetaElem*           next;
	MetaElem*           prev;
	BoundBox*           bb;
	int                i1;
	int                j1;
	int                k1;
	int                i2;
	int                j2;
	int                k2;
	short              type;
	short              flag;
	short              selcol1;
	short              selcol2;
	float              x;
	float              y;
	float              z;
	float              quat[4];
	float              expx;
	float              expy;
	float              expz;
	float              rad;
	float              rad2;
	float              s;
	float              len;
	float*              mat;
	float*              imat;
} MetaElem;

typedef struct BezTriple
{
	float           vec[3][3];
	float           alfa;
	float           weight;
	float           radius;
	short           ipo;
	char            h1;
	char            h2;
	char            f1;
	char            f2;
	char            f3;
	char            hide;
} BezTriple;

typedef struct BPoint
{
	float           vec[4];
	float           alfa;
	float           weight;
	short           f1;
	short           hide;
	float           radius;
	float           pad;
} BPoint;

typedef struct Nurb
{
	Nurb*                next;
	Nurb*                prev;
	short               type;
	short               mat_nr;
	short               hide;
	short               flag;
	short               pntsu;
	short               pntsv;
	short               resolu;
	short               resolv;
	short               orderu;
	short               orderv;
	short               flagu;
	short               flagv;
	float*               knotsu;
	float*               knotsv;
	BPoint*              bp;
	BezTriple*           bezt;
	short               tilt_interp;
	short               radius_interp;
	int                 charidx;
} Nurb;

typedef struct CharInfo
{
	short           kern;
	short           mat_nr;
	char            flag;
	char            pad;
	short           pad2;
} CharInfo;

typedef struct TextBox
{
	float           x;
	float           y;
	float           w;
	float           h;
} TextBox;

typedef struct TFace
{
	void*            tpage;
	float           uv[4][2];
	int             col[4];
	char            flag;
	char            transp;
	short           mode;
	short           tile;
	short           unwrap;
} TFace;

typedef struct MFace
{
	int             v1;
	int             v2;
	int             v3;
	int             v4;
	short           mat_nr;
	char            edcode;
	char            flag;
} MFace;

typedef struct MEdge
{
	int             v1;
	int             v2;
	char            crease;
	char            bweight;
	short           flag;
} MEdge;

typedef struct MDeformWeight
{
	int             def_nr;
	float           weight;
} MDeformWeight;

typedef struct MDeformVert
{
	MDeformWeight*           dw;
	int                     totweight;
	int                     flag;
} MDeformVert;

typedef struct MVert
{
	float           co[3];
	short           no[3];
	short           mat_nr;
	char            flag;
	char            bweight;
	char            pad[2];
} MVert;

typedef struct MCol
{
	char           a;
	char           r;
	char           g;
	char           b;
} MCol;

typedef struct MTexPoly
{
	Image*           tpage;
	char            flag;
	char            transp;
	short           mode;
	short           tile;
	short           unwrap;
} MTexPoly;

typedef struct MLoopUV
{
	float           uv[2];
} MLoopUV;

typedef struct MLoopCol
{
	char           a;
	char           r;
	char           g;
	char           b;
	int            pad;
} MLoopCol;

typedef struct MSticky
{
	float           co[2];
} MSticky;

typedef struct MSelect
{
	int           index;
	int           type;
} MSelect;

typedef struct MTFace
{
	float           uv[4][2];
	Image*           tpage;
	char            flag;
	char            transp;
	short           mode;
	short           tile;
	short           unwrap;
} MTFace;

typedef struct MFloatProperty
{
	float           f;
} MFloatProperty;

typedef struct MIntProperty
{
	int           i;
} MIntProperty;

typedef struct MStringProperty
{
	char           s[256];
} MStringProperty;

typedef struct OrigSpaceFace
{
	float           uv[4][2];
} OrigSpaceFace;

typedef struct MDisps
{
	int             totdisp;
	char            pad[4];
	float           (*disps)();
} MDisps;

typedef struct MultiresCol
{
	float           a;
	float           r;
	float           g;
	float           b;
} MultiresCol;

typedef struct MultiresFace
{
	int            v[4];
	int            mid;
	char           flag;
	char           mat_nr;
	char           pad[2];
} MultiresFace;

typedef struct MultiresEdge
{
	int           v[2];
	int           mid;
} MultiresEdge;

typedef struct MultiresLevel
{
	MultiresLevel*             next;
	MultiresLevel*             prev;
	MultiresFace*              faces;
	MultiresColFace*           colfaces;
	MultiresEdge*              edges;
	int                       totvert;
	int                       totface;
	int                       totedge;
	int                       pad;
	MVert*                     verts;
} MultiresLevel;

typedef struct PartialVisibility
{
	int*             vert_map;
	int*             edge_map;
	MFace*           old_faces;
	MEdge*           old_edges;
	int             totface;
	int             totedge;
	int             totvert;
	int             pad;
} PartialVisibility;

typedef struct ModifierData
{
	ModifierData*           next;
	ModifierData*           prev;
	int                    type;
	int                    mode;
	int                    stackindex;
	int                    pad;
	char                   name[32];
	Scene*                  scene;
	char*                   error;
} ModifierData;

typedef struct MDefInfluence
{
	int             vertex;
	float           weight;
} MDefInfluence;

typedef struct MDefCell
{
	int           offset;
	int           totinfluence;
} MDefCell;

typedef struct EditLatt
{
	Lattice*           latt;
	int               shapenr;
	char              pad[4];
} EditLatt;

typedef struct bDeformGroup
{
	bDeformGroup*           next;
	bDeformGroup*           prev;
	char                   name[32];
} bDeformGroup;

typedef struct BoundBox
{
	float           vec[8][3];
	int             flag;
	int             pad;
} BoundBox;

typedef struct ObHook
{
	ObHook*           next;
	ObHook*           prev;
	Object*           parent;
	float            parentinv[4][4];
	float            mat[4][4];
	float            cent[3];
	float            falloff;
	char             name[32];
	int*              indexar;
	int              totindex;
	int              curindex;
	short            type;
	short            active;
	float            force;
} ObHook;

typedef struct DupliObject
{
	DupliObject*           next;
	DupliObject*           prev;
	Object*                ob;
	int                   origlay;
	int                   index;
	int                   no_draw;
	int                   type;
	int                   animated;
	float                 mat[4][4];
	float                 omat[4][4];
	float                 orco[3];
	float                 uv[2];
} DupliObject;

typedef struct PartDeflect
{
	int             flag;
	short           deflect;
	short           forcefield;
	short           falloff;
	short           shape;
	short           tex_mode;
	short           kink;
	short           kink_axis;
	short           zdir;
	float           f_strength;
	float           f_damp;
	float           f_flow;
	float           f_size;
	float           f_power;
	float           maxdist;
	float           mindist;
	float           f_power_r;
	float           maxrad;
	float           minrad;
	float           pdef_damp;
	float           pdef_rdamp;
	float           pdef_perm;
	float           pdef_frict;
	float           pdef_rfrict;
	float           pdef_stickness;
	float           absorption;
	float           pdef_sbdamp;
	float           pdef_sbift;
	float           pdef_sboft;
	float           clump_fac;
	float           clump_pow;
	float           kink_freq;
	float           kink_shape;
	float           kink_amp;
	float           free_end;
	float           tex_nabla;
	Tex*             tex;
	struct RNG*      rng;
	float           f_noise;
	int             seed;
} PartDeflect;

typedef struct EffectorWeights
{
	Group*           group;
	float           weight[13];
	float           global_gravity;
	short           flag;
	short           rt[3];
} EffectorWeights;

typedef struct PTCacheMem
{
	PTCacheMem*           next;
	PTCacheMem*           prev;
	int                  frame;
	int                  totpoint;
	int                  data_types;
	int                  flag;
	int*                  index_array;
	void*                 data[8];
	void*                 cur[8];
} PTCacheMem;

typedef struct SBVertex
{
	float           vec[4];
} SBVertex;

typedef struct BulletSoftBody
{
	int             flag;
	float           linStiff;
	float           angStiff;
	float           volume;
	int             viterations;
	int             piterations;
	int             diterations;
	int             citerations;
	float           kSRHR_CL;
	float           kSKHR_CL;
	float           kSSHR_CL;
	float           kSR_SPLT_CL;
	float           kSK_SPLT_CL;
	float           kSS_SPLT_CL;
	float           kVCF;
	float           kDP;
	float           kDG;
	float           kLF;
	float           kPR;
	float           kVC;
	float           kDF;
	float           kMT;
	float           kCHR;
	float           kKHR;
	float           kSHR;
	float           kAHR;
	int             collisionflags;
	int             numclusteriterations;
	float           welding;
	float           margin;
} BulletSoftBody;

typedef struct FluidsimSettings
{
	FluidsimModifierData*           fmd;
	short                          type;
	short                          show_advancedoptions;
	short                          resolutionxyz;
	short                          previewresxyz;
	float                          realsize;
	short                          guiDisplayMode;
	short                          renderDisplayMode;
	float                          viscosityValue;
	short                          viscosityMode;
	short                          viscosityExponent;
	float                          gravx;
	float                          gravy;
	float                          gravz;
	float                          animStart;
	float                          animEnd;
	int                            bakeStart;
	int                            bakeEnd;
	float                          gstar;
	int                            maxRefine;
	float                          iniVelx;
	float                          iniVely;
	float                          iniVelz;
	Mesh*                           orgMesh;
	Mesh*                           meshSurface;
	Mesh*                           meshBB;
	char                           surfdataPath[240];
	float                          bbStart[3];
	float                          bbSize[3];
	Ipo*                            ipo;
	short                          typeFlags;
	char                           domainNovecgen;
	char                           volumeInitType;
	float                          partSlipValue;
	int                            generateTracers;
	float                          generateParticles;
	float                          surfaceSmoothing;
	int                            surfaceSubdivs;
	int                            flag;
	float                          particleInfSize;
	float                          particleInfAlpha;
	float                          farFieldSize;
	MVert*                          meshSurfNormals;
	float                          cpsTimeStart;
	float                          cpsTimeEnd;
	float                          cpsQuality;
	float                          attractforceStrength;
	float                          attractforceRadius;
	float                          velocityforceStrength;
	float                          velocityforceRadius;
	int                            lastgoodframe;
} FluidsimSettings;

typedef struct Base
{
	Base*             next;
	Base*             prev;
	int              lay;
	int              selcol;
	int              flag;
	short            sx;
	short            sy;
	Object*           object;
} Base;

typedef struct AviCodecData
{
	void*           lpFormat;
	void*           lpParms;
	int            cbFormat;
	int            cbParms;
	int            fccType;
	int            fccHandler;
	int            dwKeyFrameEvery;
	int            dwQuality;
	int            dwBytesPerSecond;
	int            dwFlags;
	int            dwInterleaveEvery;
	int            pad;
	char           avicodecname[128];
} AviCodecData;

typedef struct QuicktimeCodecData
{
	void*           cdParms;
	void*           pad;
	int            cdSize;
	int            pad2;
	char           qtcodecname[128];
} QuicktimeCodecData;

typedef struct QuicktimeCodecSettings
{
	int             codecType;
	int             codecSpatialQuality;
	int             codec;
	int             codecFlags;
	int             colorDepth;
	int             codecTemporalQuality;
	int             minSpatialQuality;
	int             minTemporalQuality;
	int             keyFrameRate;
	int             bitRate;
	int             audiocodecType;
	int             audioSampleRate;
	short           audioBitDepth;
	short           audioChannels;
	int             audioCodecFlags;
	int             audioBitRate;
	int             pad1;
} QuicktimeCodecSettings;

typedef struct FFMpegCodecData
{
	int                  type;
	int                  codec;
	int                  audio_codec;
	int                  video_bitrate;
	int                  audio_bitrate;
	int                  audio_mixrate;
	float                audio_volume;
	int                  gop_size;
	int                  flags;
	int                  rc_min_rate;
	int                  rc_max_rate;
	int                  rc_buffer_size;
	int                  mux_packet_size;
	int                  mux_rate;
	IDProperty*           properties;
} FFMpegCodecData;

typedef struct AudioData
{
	int             mixrate;
	float           main;
	float           speed_of_sound;
	float           doppler_factor;
	int             distance_model;
	short           flag;
	short           pad;
} AudioData;

typedef struct SceneRenderLayer
{
	SceneRenderLayer*           next;
	SceneRenderLayer*           prev;
	char                       name[32];
	Material*                   mat_override;
	Group*                      light_override;
	int                        lay;
	int                        lay_zmask;
	int                        layflag;
	int                        pad;
	int                        passflag;
	int                        pass_xor;
} SceneRenderLayer;

typedef struct RenderProfile
{
	RenderProfile*           next;
	RenderProfile*           prev;
	char                    name[32];
	short                   particle_perc;
	short                   subsurf_max;
	short                   shadbufsample_max;
	short                   pad1;
	float                   ao_error;
	float                   pad2;
} RenderProfile;

typedef struct GameDome
{
	short           res;
	short           mode;
	short           angle;
	short           tilt;
	float           resbuf;
	float           pad2;
	Text*            warptext;
} GameDome;

typedef struct GameFraming
{
	float           col[3];
	char            type;
	char            pad1;
	char            pad2;
	char            pad3;
} GameFraming;

typedef struct TimeMarker
{
	TimeMarker*           next;
	TimeMarker*           prev;
	int                  frame;
	char                 name[64];
	int                  flag;
	Object*               camera;
} TimeMarker;

typedef struct Paint
{
	Brush*           brush;
	void*            paint_cursor;
	char            paint_cursor_col[4];
	int             flags;
} Paint;

typedef struct ParticleBrushData
{
	short           size;
	short           step;
	short           invert;
	short           count;
	int             flag;
	float           strength;
} ParticleBrushData;

typedef struct TransformOrientation
{
	TransformOrientation*           next;
	TransformOrientation*           prev;
	char                           name[36];
	float                          mat[3][3];
} TransformOrientation;

typedef struct bStats
{
	int           totobj;
	int           totlamp;
	int           totobjsel;
	int           totcurve;
	int           totmesh;
	int           totarmature;
	int           totvert;
	int           totface;
} bStats;

typedef struct UnitSettings
{
	float           scale_length;
	short           system;
	short           flag;
} UnitSettings;

typedef struct PhysicsSettings
{
	float           gravity[3];
	int             flag;
	int             quick_cache_step;
	int             rt;
} PhysicsSettings;

typedef struct RegionView3D
{
	float                     winmat[4][4];
	float                     viewmat[4][4];
	float                     viewinv[4][4];
	float                     persmat[4][4];
	float                     persinv[4][4];
	float                     viewmatob[4][4];
	float                     persmatob[4][4];
	float                     twmat[4][4];
	float                     viewquat[4];
	float                     dist;
	float                     zfac;
	float                     camdx;
	float                     camdy;
	float                     pixsize;
	float                     ofs[3];
	short                     camzoom;
	short                     viewbut;
	short                     twdrawflag;
	short                     pad;
	short                     rflag;
	short                     viewlock;
	short                     persp;
	short                     view;
	float                     clip[6][4];
	float                     clip_local[6][4];
	BoundBox*                  clipbb;
	bGPdata*                   gpd;
	RegionView3D*              localvd;
	struct RenderInfo*         ri;
	struct RetopoViewData*     retopo_view_data;
	struct ViewDepths*         depths;
	struct SmoothViewStore*    sms;
	struct wmTimer*            smooth_timer;
	float                     lviewquat[4];
	short                     lpersp;
	short                     lview;
	float                     gridview;
	float                     twangle[3];
	float                     padf;
} RegionView3D;

typedef struct FileSelectParams
{
	char            title[24];
	char            dir[240];
	char            file[80];
	char            renamefile[80];
	char            renameedit[80];
	short           type;
	short           flag;
	short           sort;
	short           display;
	short           filter;
	short           active_bookmark;
	int             active_file;
	int             selstate;
	short           f_fp;
	short           pad;
	char            fp_str[8];
} FileSelectParams;

typedef struct SpaceTimeCache
{
	SpaceTimeCache*           next;
	SpaceTimeCache*           prev;
	int                      type;
	int                      flag;
	float*                    array;
	int                      len;
	int                      startframe;
	int                      endframe;
	int                      ok;
} SpaceTimeCache;

typedef struct ConsoleLine
{
	ConsoleLine*           next;
	ConsoleLine*           prev;
	int                   len_alloc;
	int                   len;
	char*                  line;
	int                   cursor;
	int                   type;
} ConsoleLine;

typedef struct uiFont
{
	uiFont*           next;
	uiFont*           prev;
	char             filename[256];
	short            blf_id;
	short            uifont_id;
	short            r_to_l;
	short            pad;
} uiFont;

typedef struct uiFontStyle
{
	short           uifont_id;
	short           points;
	short           kerning;
	char            pad[6];
	short           italic;
	short           bold;
	short           shadow;
	short           shadx;
	short           shady;
	short           align;
	float           shadowalpha;
	float           shadowcolor;
} uiFontStyle;

typedef struct uiWidgetColors
{
	char            outline[4];
	char            inner[4];
	char            inner_sel[4];
	char            item[4];
	char            text[4];
	char            text_sel[4];
	short           shaded;
	short           shadetop;
	short           shadedown;
	short           alpha_check;
} uiWidgetColors;

typedef struct uiWidgetStateColors
{
	char            inner_anim[4];
	char            inner_anim_sel[4];
	char            inner_key[4];
	char            inner_key_sel[4];
	char            inner_driven[4];
	char            inner_driven_sel[4];
	float           blend;
	float           pad;
} uiWidgetStateColors;

typedef struct ThemeSpace
{
	char           back[4];
	char           title[4];
	char           text[4];
	char           text_hi[4];
	char           header[4];
	char           header_title[4];
	char           header_text[4];
	char           header_text_hi[4];
	char           button[4];
	char           button_title[4];
	char           button_text[4];
	char           button_text_hi[4];
	char           list[4];
	char           list_title[4];
	char           list_text[4];
	char           list_text_hi[4];
	char           panel[4];
	char           panel_title[4];
	char           panel_text[4];
	char           panel_text_hi[4];
	char           shade1[4];
	char           shade2[4];
	char           hilite[4];
	char           grid[4];
	char           wire[4];
	char           select[4];
	char           lamp[4];
	char           active[4];
	char           group[4];
	char           group_active[4];
	char           transform[4];
	char           vertex[4];
	char           vertex_select[4];
	char           edge[4];
	char           edge_select[4];
	char           edge_seam[4];
	char           edge_sharp[4];
	char           edge_facesel[4];
	char           edge_crease[4];
	char           face[4];
	char           face_select[4];
	char           face_dot[4];
	char           normal[4];
	char           vertex_normal[4];
	char           bone_solid[4];
	char           bone_pose[4];
	char           strip[4];
	char           strip_select[4];
	char           cframe[4];
	char           nurb_uline[4];
	char           nurb_vline[4];
	char           act_spline[4];
	char           nurb_sel_uline[4];
	char           nurb_sel_vline[4];
	char           lastsel_point[4];
	char           handle_free[4];
	char           handle_auto[4];
	char           handle_vect[4];
	char           handle_align[4];
	char           handle_sel_free[4];
	char           handle_sel_auto[4];
	char           handle_sel_vect[4];
	char           handle_sel_align[4];
	char           ds_channel[4];
	char           ds_subchannel[4];
	char           console_output[4];
	char           console_input[4];
	char           console_info[4];
	char           console_error[4];
	char           console_cursor[4];
	char           vertex_size;
	char           facedot_size;
	char           bpad[2];
	char           syntaxl[4];
	char           syntaxn[4];
	char           syntaxb[4];
	char           syntaxv[4];
	char           syntaxc[4];
	char           movie[4];
	char           image[4];
	char           scene[4];
	char           audio[4];
	char           effect[4];
	char           plugin[4];
	char           transition[4];
	char           meta[4];
	char           editmesh_active[4];
	char           handle_vertex[4];
	char           handle_vertex_select[4];
	char           handle_vertex_size;
	char           hpad[7];
	char           preview_back[4];
} ThemeSpace;

typedef struct ThemeWireColor
{
	char            solid[4];
	char            select[4];
	char            active[4];
	short           flag;
	short           pad;
} ThemeWireColor;

typedef struct bAddon
{
	bAddon*           next;
	bAddon*           prev;
	char             module[64];
} bAddon;

typedef struct SolidLight
{
	int             flag;
	int             pad;
	float           col[4];
	float           spec[4];
	float           vec[4];
} SolidLight;

typedef struct ScrEdge
{
	ScrEdge*           next;
	ScrEdge*           prev;
	ScrVert*           v1;
	ScrVert*           v2;
	short             border;
	short             flag;
	int               pad;
} ScrEdge;

typedef struct Panel
{
	Panel*               next;
	Panel*               prev;
	struct PanelType*    type;
	struct uiLayout*     layout;
	char                panelname[64];
	char                tabname[64];
	char                drawname[64];
	short               ofsx;
	short               ofsy;
	short               sizex;
	short               sizey;
	short               labelofs;
	short               pad;
	short               flag;
	short               runtime_flag;
	short               control;
	short               snap;
	int                 sortorder;
	Panel*               paneltab;
	void*                activedata;
	int                 list_scroll;
	int                 list_size;
	int                 list_last_len;
	int                 list_grip_size;
	char                list_search[64];
} Panel;

typedef struct FileGlobal
{
	char              subvstr[4];
	short             subversion;
	short             pads;
	short             minversion;
	short             minsubversion;
	short             displaymode;
	short             winpos;
	bScreen*           curscreen;
	Scene*             curscene;
	int               fileflags;
	int               globalf;
	char              filename[240];
} FileGlobal;

typedef struct StripElem
{
	char           name[80];
} StripElem;

typedef struct StripCrop
{
	int           top;
	int           bottom;
	int           left;
	int           right;
} StripCrop;

typedef struct StripTransform
{
	int           xofs;
	int           yofs;
} StripTransform;

typedef struct StripColorBalance
{
	float           lift[3];
	float           gamma[3];
	float           gain[3];
	int             flag;
	int             pad;
} StripColorBalance;

typedef struct StripProxy
{
	char            dir[160];
	char            file[80];
	struct anim*     anim;
	short           size;
	short           quality;
	int             pad;
} StripProxy;

typedef struct Strip
{
	Strip*                       next;
	Strip*                       prev;
	int                         rt;
	int                         len;
	int                         us;
	int                         done;
	int                         startstill;
	int                         endstill;
	StripElem*                   stripdata;
	char                        dir[160];
	int                         orx;
	int                         ory;
	StripProxy*                  proxy;
	StripCrop*                   crop;
	StripTransform*              transform;
	StripColorBalance*           color_balance;
} Strip;

typedef struct PluginSeq
{
	char            name[256];
	void*            handle;
	char*            pname;
	int             vars;
	int             version;
	void*            varstr;
	float*           cfra;
	float           data[32];
	void*            instance_private_data;
	void**            current_private_data;
	void            (*doit)();
	void            (*callback)();
} PluginSeq;

typedef struct MetaStack
{
	MetaStack*           next;
	MetaStack*           prev;
	ListBase*            oldbasep;
	Sequence*            parseq;
} MetaStack;

typedef struct WipeVars
{
	float           edgeWidth;
	float           angle;
	short           forward;
	short           wipetype;
} WipeVars;

typedef struct GlowVars
{
	float           fMini;
	float           fClamp;
	float           fBoost;
	float           dDist;
	int             dQuality;
	int             bNoComp;
} GlowVars;

typedef struct TransformVars
{
	float           ScalexIni;
	float           ScaleyIni;
	float           ScalexFin;
	float           ScaleyFin;
	float           xIni;
	float           xFin;
	float           yIni;
	float           yFin;
	float           rotIni;
	float           rotFin;
	int             percent;
	int             interpolation;
	int             uniform_scale;
} TransformVars;

typedef struct SolidColorVars
{
	float           col[3];
	float           pad;
} SolidColorVars;

typedef struct SpeedControlVars
{
	float*           frameMap;
	float           globalSpeed;
	int             flags;
	int             length;
	int             lastValidFrame;
} SpeedControlVars;

typedef struct Effect
{
	Effect*           next;
	Effect*           prev;
	short            type;
	short            flag;
	short            buttype;
	short            rt;
} Effect;

typedef struct BuildEff
{
	BuildEff*           next;
	BuildEff*           prev;
	short              type;
	short              flag;
	short              buttype;
	short              rt;
	float              len;
	float              sfra;
} BuildEff;

typedef struct PartEff
{
	PartEff*            next;
	PartEff*            prev;
	short              type;
	short              flag;
	short              buttype;
	short              stype;
	short              vertgroup;
	short              userjit;
	float              sta;
	float              end;
	float              lifetime;
	int                totpart;
	int                totkey;
	int                seed;
	float              normfac;
	float              obfac;
	float              randfac;
	float              texfac;
	float              randlife;
	float              force[3];
	float              damp;
	float              nabla;
	float              vectsize;
	float              maxlen;
	float              pad;
	float              defvec[3];
	float              mult[4];
	float              life[4];
	short              child[4];
	short              mat[4];
	short              texmap;
	short              curmult;
	short              staticstep;
	short              omat;
	short              timetex;
	short              speedtex;
	short              flag2;
	short              flag2neg;
	short              disp;
	short              vertgroup_v;
	char               vgroupname[32];
	char               vgroupname_v[32];
	float              imat[4][4];
	struct Particle*    keys;
	Group*              group;
} PartEff;

typedef struct WaveEff
{
	WaveEff*           next;
	WaveEff*           prev;
	short             type;
	short             flag;
	short             buttype;
	short             stype;
	float             startx;
	float             starty;
	float             height;
	float             width;
	float             narrow;
	float             speed;
	float             minfac;
	float             damp;
	float             timeoffs;
	float             lifetime;
} WaveEff;

typedef struct TreeStoreElem
{
	short           type;
	short           nr;
	short           flag;
	short           used;
	ID*              id;
} TreeStoreElem;

typedef struct TreeStore
{
	int                     totelem;
	int                     usedelem;
	TreeStoreElem*           data;
} TreeStore;

typedef struct bProperty
{
	bProperty*           next;
	bProperty*           prev;
	char                name[32];
	short               type;
	short               flag;
	int                 data;
	void*                poin;
} bProperty;

typedef struct bNearSensor
{
	char            name[32];
	float           dist;
	float           resetdist;
	int             lastval;
	int             pad;
} bNearSensor;

typedef struct bMouseSensor
{
	short           type;
	short           flag;
	short           pad1;
	short           pad2;
} bMouseSensor;

typedef struct bTouchSensor
{
	char               name[32];
	Material*           ma;
	float              dist;
	float              pad;
} bTouchSensor;

typedef struct bKeyboardSensor
{
	short           key;
	short           qual;
	short           type;
	short           qual2;
	char            targetName[32];
	char            toggleName[32];
} bKeyboardSensor;

typedef struct bPropertySensor
{
	int            type;
	int            pad;
	char           name[32];
	char           value[32];
	char           maxvalue[32];
} bPropertySensor;

typedef struct bActuatorSensor
{
	int            type;
	int            pad;
	char           name[32];
} bActuatorSensor;

typedef struct bDelaySensor
{
	short           delay;
	short           duration;
	short           flag;
	short           pad;
} bDelaySensor;

typedef struct bCollisionSensor
{
	char            name[32];
	char            materialName[32];
	short           damptimer;
	short           damp;
	short           mode;
	short           pad2;
} bCollisionSensor;

typedef struct bRadarSensor
{
	char            name[32];
	float           angle;
	float           range;
	short           flag;
	short           axis;
} bRadarSensor;

typedef struct bRandomSensor
{
	char           name[32];
	int            seed;
	int            delay;
} bRandomSensor;

typedef struct bRaySensor
{
	char            name[32];
	float           range;
	char            propname[32];
	char            matname[32];
	short           mode;
	short           pad1;
	int             axisflag;
} bRaySensor;

typedef struct bArmatureSensor
{
	char            posechannel[32];
	char            constraint[32];
	int             type;
	float           value;
} bArmatureSensor;

typedef struct bMessageSensor
{
	Object*           fromObject;
	char             subject[32];
	char             body[32];
} bMessageSensor;

typedef struct bSensor
{
	bSensor*               next;
	bSensor*               prev;
	short                 type;
	short                 otype;
	short                 flag;
	short                 pulse;
	short                 freq;
	short                 totlinks;
	short                 pad1;
	short                 pad2;
	char                  name[32];
	void*                  data;
	bController**           links;
	Object*                ob;
	short                 invert;
	short                 level;
	short                 tap;
	short                 pad;
} bSensor;

typedef struct bJoystickSensor
{
	char            name[32];
	char            type;
	char            joyindex;
	short           flag;
	short           axis;
	short           axis_single;
	int             axisf;
	int             button;
	int             hat;
	int             hatf;
	int             precision;
} bJoystickSensor;

typedef struct bExpressionCont
{
	char           str[128];
} bExpressionCont;

typedef struct bPythonCont
{
	Text*           text;
	char           module[64];
	int            mode;
	int            flag;
} bPythonCont;

typedef struct bController
{
	bController*           next;
	bController*           prev;
	bController*           mynew;
	short                 type;
	short                 flag;
	short                 inputs;
	short                 totlinks;
	short                 otype;
	short                 totslinks;
	short                 pad2;
	short                 pad3;
	char                  name[32];
	void*                  data;
	bActuator**             links;
	bSensor**               slinks;
	short                 val;
	short                 valo;
	int                   state_mask;
} bController;

typedef struct bAddObjectActuator
{
	int              time;
	int              pad;
	Object*           ob;
} bAddObjectActuator;

typedef struct bActionActuator
{
	bAction*           act;
	short             type;
	short             flag;
	int               sta;
	int               end;
	char              name[32];
	char              frameProp[32];
	short             blendin;
	short             priority;
	short             end_reset;
	short             strideaxis;
	float             stridelength;
} bActionActuator;

typedef struct Sound3D
{
	float           min_gain;
	float           max_gain;
	float           reference_distance;
	float           max_distance;
	float           rolloff_factor;
	float           cone_inner_angle;
	float           cone_outer_angle;
	float           cone_outer_gain;
} Sound3D;

typedef struct bEditObjectActuator
{
	int              time;
	short            type;
	short            flag;
	Object*           ob;
	Mesh*             me;
	char             name[32];
	float            linVelocity[3];
	float            angVelocity[3];
	float            mass;
	short            localflag;
	short            dyn_operation;
} bEditObjectActuator;

typedef struct bSceneActuator
{
	short            type;
	short            pad1;
	int              pad;
	Scene*            scene;
	Object*           camera;
} bSceneActuator;

typedef struct bPropertyActuator
{
	int              pad;
	int              type;
	char             name[32];
	char             value[32];
	Object*           ob;
} bPropertyActuator;

typedef struct bObjectActuator
{
	short            flag;
	short            type;
	short            otype;
	short            damping;
	float            forceloc[3];
	float            forcerot[3];
	float            pad[3];
	float            pad1[3];
	float            dloc[3];
	float            drot[3];
	float            linearvelocity[3];
	float            angularvelocity[3];
	Object*           reference;
} bObjectActuator;

typedef struct bIpoActuator
{
	short           flag;
	short           type;
	int             sta;
	int             end;
	char            name[32];
	char            frameProp[32];
	short           pad1;
	short           pad2;
	short           pad3;
	short           pad4;
} bIpoActuator;

typedef struct bCameraActuator
{
	Object*           ob;
	float            height;
	float            min;
	float            max;
	float            pad;
	short            pad1;
	short            axis;
	float            pad2;
} bCameraActuator;

typedef struct bConstraintActuator
{
	short           type;
	short           mode;
	short           flag;
	short           damp;
	short           time;
	short           rotdamp;
	int             pad;
	float           minloc[3];
	float           maxloc[3];
	float           minrot[3];
	float           maxrot[3];
	char            matprop[32];
} bConstraintActuator;

typedef struct bGroupActuator
{
	short           flag;
	short           type;
	int             sta;
	int             end;
	char            name[32];
	short           pad[3];
	short           cur;
	short           butsta;
	short           butend;
} bGroupActuator;

typedef struct bRandomActuator
{
	int             seed;
	int             distribution;
	int             int_arg_1;
	int             int_arg_2;
	float           float_arg_1;
	float           float_arg_2;
	char            propname[32];
} bRandomActuator;

typedef struct bMessageActuator
{
	char             toPropName[32];
	Object*           toObject;
	char             subject[32];
	short            bodyType;
	short            pad1;
	int              pad2;
	char             body[32];
} bMessageActuator;

typedef struct bGameActuator
{
	short           flag;
	short           type;
	int             sta;
	int             end;
	char            filename[64];
	char            loadaniname[64];
} bGameActuator;

typedef struct bVisibilityActuator
{
	int           flag;
} bVisibilityActuator;

typedef struct bTwoDFilterActuator
{
	char            pad[4];
	short           type;
	short           flag;
	int             int_arg;
	float           float_arg;
	Text*            text;
} bTwoDFilterActuator;

typedef struct bParentActuator
{
	char             pad[2];
	short            flag;
	int              type;
	Object*           ob;
} bParentActuator;

typedef struct bStateActuator
{
	int           type;
	int           mask;
} bStateActuator;

typedef struct bArmatureActuator
{
	char             posechannel[32];
	char             constraint[32];
	int              type;
	float            weight;
	Object*           target;
	Object*           subtarget;
} bArmatureActuator;

typedef struct bActuator
{
	bActuator*           next;
	bActuator*           prev;
	bActuator*           mynew;
	short               type;
	short               flag;
	short               otype;
	short               go;
	char                name[32];
	void*                data;
	Object*              ob;
} bActuator;

typedef struct GroupObject
{
	GroupObject*           next;
	GroupObject*           prev;
	Object*                ob;
	void*                  lampren;
	int                   recalc;
	int                   pad;
} GroupObject;

typedef struct bMotionPathVert
{
	float           co[3];
	int             flag;
} bMotionPathVert;

typedef struct bMotionPath
{
	bMotionPathVert*           points;
	int                       length;
	int                       start_frame;
	int                       end_frame;
	int                       flag;
} bMotionPath;

typedef struct bAnimVizSettings
{
	int             ghost_sf;
	int             ghost_ef;
	int             ghost_bc;
	int             ghost_ac;
	short           ghost_type;
	short           ghost_step;
	short           ghost_flag;
	short           recalc;
	short           path_type;
	short           path_step;
	short           path_viewflag;
	short           path_bakeflag;
	int             path_sf;
	int             path_ef;
	int             path_bc;
	int             path_ac;
} bAnimVizSettings;

typedef struct bIKParam
{
	int           iksolver;
} bIKParam;

typedef struct bItasc
{
	int             iksolver;
	float           precision;
	short           numiter;
	short           numstep;
	float           minstep;
	float           maxstep;
	short           solver;
	short           flag;
	float           feedback;
	float           maxvel;
	float           dampmax;
	float           dampeps;
} bItasc;

typedef struct bConstraintChannel
{
	bConstraintChannel*           next;
	bConstraintChannel*           prev;
	Ipo*                          ipo;
	short                        flag;
	char                         name[30];
} bConstraintChannel;

typedef struct bConstraint
{
	bConstraint*           next;
	bConstraint*           prev;
	void*                  data;
	short                 type;
	short                 flag;
	char                  ownspace;
	char                  tarspace;
	char                  name[30];
	float                 enforce;
	float                 headtail;
	int                   pad;
	Ipo*                   ipo;
	float                 lin_error;
	float                 rot_error;
} bConstraint;

typedef struct bConstraintTarget
{
	bConstraintTarget*           next;
	bConstraintTarget*           prev;
	Object*                      tar;
	char                        subtarget[32];
	float                       matrix[4][4];
	short                       space;
	short                       flag;
	short                       type;
	short                       rotOrder;
} bConstraintTarget;

typedef struct bKinematicConstraint
{
	Object*           tar;
	short            iterations;
	short            flag;
	short            rootbone;
	short            max_rootbone;
	char             subtarget[32];
	Object*           poletar;
	char             polesubtarget[32];
	float            poleangle;
	float            weight;
	float            orientweight;
	float            grabtarget[3];
	short            type;
	short            mode;
	float            dist;
} bKinematicConstraint;

typedef struct bSplineIKConstraint
{
	Object*           tar;
	float*            points;
	short            numpoints;
	short            chainlen;
	short            flag;
	short            xzScaleMode;
} bSplineIKConstraint;

typedef struct bTrackToConstraint
{
	Object*           tar;
	int              reserved1;
	int              reserved2;
	int              flags;
	int              pad;
	char             subtarget[32];
} bTrackToConstraint;

typedef struct bRotateLikeConstraint
{
	Object*           tar;
	int              flag;
	int              reserved1;
	char             subtarget[32];
} bRotateLikeConstraint;

typedef struct bLocateLikeConstraint
{
	Object*           tar;
	int              flag;
	int              reserved1;
	char             subtarget[32];
} bLocateLikeConstraint;

typedef struct bSizeLikeConstraint
{
	Object*           tar;
	int              flag;
	int              reserved1;
	char             subtarget[32];
} bSizeLikeConstraint;

typedef struct bSameVolumeConstraint
{
	int             flag;
	float           volume;
} bSameVolumeConstraint;

typedef struct bTransLikeConstraint
{
	Object*           tar;
	char             subtarget[32];
} bTransLikeConstraint;

typedef struct bMinMaxConstraint
{
	Object*           tar;
	int              minmaxflag;
	float            offset;
	int              flag;
	short            sticky;
	short            stuck;
	short            pad1;
	short            pad2;
	float            cache[3];
	char             subtarget[32];
} bMinMaxConstraint;

typedef struct bActionConstraint
{
	Object*            tar;
	short             type;
	short             local;
	int               start;
	int               end;
	float             min;
	float             max;
	int               pad;
	bAction*           act;
	char              subtarget[32];
} bActionConstraint;

typedef struct bLockTrackConstraint
{
	Object*           tar;
	int              trackflag;
	int              lockflag;
	char             subtarget[32];
} bLockTrackConstraint;

typedef struct bDampTrackConstraint
{
	Object*           tar;
	int              trackflag;
	int              pad;
	char             subtarget[32];
} bDampTrackConstraint;

typedef struct bFollowPathConstraint
{
	Object*           tar;
	float            offset;
	float            offset_fac;
	int              followflag;
	short            trackflag;
	short            upflag;
} bFollowPathConstraint;

typedef struct bStretchToConstraint
{
	Object*           tar;
	int              volmode;
	int              plane;
	float            orglength;
	float            bulge;
	char             subtarget[32];
} bStretchToConstraint;

typedef struct bRigidBodyJointConstraint
{
	Object*           tar;
	Object*           child;
	int              type;
	float            pivX;
	float            pivY;
	float            pivZ;
	float            axX;
	float            axY;
	float            axZ;
	float            minLimit[6];
	float            maxLimit[6];
	float            extraFz;
	short            flag;
	short            pad;
	short            pad1;
	short            pad2;
} bRigidBodyJointConstraint;

typedef struct bClampToConstraint
{
	Object*           tar;
	int              flag;
	int              flag2;
} bClampToConstraint;

typedef struct bChildOfConstraint
{
	Object*           tar;
	int              flag;
	int              pad;
	float            invmat[4][4];
	char             subtarget[32];
} bChildOfConstraint;

typedef struct bTransformConstraint
{
	Object*           tar;
	char             subtarget[32];
	short            from;
	short            to;
	char             map[3];
	char             expo;
	float            from_min[3];
	float            from_max[3];
	float            to_min[3];
	float            to_max[3];
} bTransformConstraint;

typedef struct bPivotConstraint
{
	Object*           tar;
	char             subtarget[32];
	float            offset[3];
	short            rotAxis;
	short            flag;
} bPivotConstraint;

typedef struct bLocLimitConstraint
{
	float           xmin;
	float           xmax;
	float           ymin;
	float           ymax;
	float           zmin;
	float           zmax;
	short           flag;
	short           flag2;
} bLocLimitConstraint;

typedef struct bRotLimitConstraint
{
	float           xmin;
	float           xmax;
	float           ymin;
	float           ymax;
	float           zmin;
	float           zmax;
	short           flag;
	short           flag2;
} bRotLimitConstraint;

typedef struct bSizeLimitConstraint
{
	float           xmin;
	float           xmax;
	float           ymin;
	float           ymax;
	float           zmin;
	float           zmax;
	short           flag;
	short           flag2;
} bSizeLimitConstraint;

typedef struct bDistLimitConstraint
{
	Object*           tar;
	char             subtarget[32];
	float            dist;
	float            soft;
	short            flag;
	short            mode;
	int              pad;
} bDistLimitConstraint;

typedef struct bShrinkwrapConstraint
{
	Object*           target;
	float            dist;
	short            shrinkType;
	char             projAxis;
	char             pad[9];
} bShrinkwrapConstraint;

typedef struct bActionModifier
{
	bActionModifier*           next;
	bActionModifier*           prev;
	short                     type;
	short                     flag;
	char                      channel[32];
	float                     noisesize;
	float                     turbul;
	short                     channels;
	short                     no_rot_axis;
	Object*                    ob;
} bActionModifier;

typedef struct bNodeStack
{
	float           vec[4];
	float           min;
	float           max;
	void*            data;
	short           hasinput;
	short           hasoutput;
	short           datatype;
	short           sockettype;
} bNodeStack;

typedef struct bNodeLink
{
	bNodeLink*             next;
	bNodeLink*             prev;
	bNode*                 fromnode;
	bNode*                 tonode;
	bNodeSocket*           fromsock;
	bNodeSocket*           tosock;
	int                   flag;
	int                   pad;
} bNodeLink;

typedef struct NodeImageAnim
{
	int             frames;
	int             sfra;
	int             nr;
	char            cyclic;
	char            movie;
	short           pad;
} NodeImageAnim;

typedef struct NodeBlurData
{
	short           sizex;
	short           sizey;
	short           samples;
	short           maxspeed;
	short           minspeed;
	short           relative;
	float           fac;
	float           percentx;
	float           percenty;
	short           filtertype;
	char            bokeh;
	char            gamma;
	short           curved;
	short           pad;
	int             image_in_width;
	int             image_in_height;
} NodeBlurData;

typedef struct NodeDBlurData
{
	float           center_x;
	float           center_y;
	float           distance;
	float           angle;
	float           spin;
	float           zoom;
	short           iter;
	char            wrap;
	char            pad;
} NodeDBlurData;

typedef struct NodeBilateralBlurData
{
	float           sigma_color;
	float           sigma_space;
	short           iter;
	short           pad;
} NodeBilateralBlurData;

typedef struct NodeHueSat
{
	float           hue;
	float           sat;
	float           val;
} NodeHueSat;

typedef struct NodeImageFile
{
	char            name[256];
	short           imtype;
	short           subimtype;
	short           quality;
	short           codec;
	int             sfra;
	int             efra;
} NodeImageFile;

typedef struct NodeChroma
{
	float           t1;
	float           t2;
	float           t3;
	float           fsize;
	float           fstrength;
	float           falpha;
	float           key[4];
	short           algorithm;
	short           channel;
} NodeChroma;

typedef struct NodeTwoXYs
{
	short           x1;
	short           x2;
	short           y1;
	short           y2;
	float           fac_x1;
	float           fac_x2;
	float           fac_y1;
	float           fac_y2;
} NodeTwoXYs;

typedef struct NodeTwoFloats
{
	float           x;
	float           y;
} NodeTwoFloats;

typedef struct NodeGeometry
{
	char           uvname[32];
	char           colname[32];
} NodeGeometry;

typedef struct NodeVertexCol
{
	char           name[32];
} NodeVertexCol;

typedef struct NodeDefocus
{
	char            bktype;
	char            rotation;
	char            preview;
	char            gamco;
	short           samples;
	short           no_zbuf;
	float           fstop;
	float           maxblur;
	float           bthresh;
	float           scale;
} NodeDefocus;

typedef struct NodeScriptDict
{
	void*           dict;
	void*           node;
} NodeScriptDict;

typedef struct NodeGlare
{
	char            quality;
	char            type;
	char            iter;
	char            angle;
	char            angle_ofs;
	char            size;
	char            pad[2];
	float           colmod;
	float           mix;
	float           threshold;
	float           fade;
} NodeGlare;

typedef struct NodeTonemap
{
	float           key;
	float           offset;
	float           gamma;
	float           f;
	float           m;
	float           a;
	float           c;
	int             type;
} NodeTonemap;

typedef struct NodeLensDist
{
	short           jit;
	short           proj;
	short           fit;
	short           pad;
} NodeLensDist;

typedef struct NodeColorBalance
{
	float           slope[3];
	float           offset[3];
	float           power[3];
	float           lift[3];
	float           gamma[3];
	float           gain[3];
	float           lift_lgg[3];
	float           gamma_inv[3];
} NodeColorBalance;

typedef struct NodeColorspill
{
	short           limchan;
	short           unspill;
	float           limscale;
	float           uspillr;
	float           uspillg;
	float           uspillb;
} NodeColorspill;

typedef struct TexNodeOutput
{
	char           name[32];
} TexNodeOutput;

typedef struct CurveMapPoint
{
	float           x;
	float           y;
	short           flag;
	short           shorty;
} CurveMapPoint;

typedef struct CurveMap
{
	short                   totpoint;
	short                   flag;
	float                   range;
	float                   mintable;
	float                   maxtable;
	float                   ext_in[2];
	float                   ext_out[2];
	CurveMapPoint*           curve;
	CurveMapPoint*           table;
	CurveMapPoint*           premultable;
} CurveMap;

typedef struct Histogram
{
	int             channels;
	int             x_resolution;
	float           data_r[256];
	float           data_g[256];
	float           data_b[256];
	float           data_luma[256];
	float           xmax;
	float           ymax;
	int             mode;
	int             height;
} Histogram;

typedef struct BrushClone
{
	Image*           image;
	float           offset[2];
	float           alpha;
	float           pad;
} BrushClone;

typedef struct CustomDataLayer
{
	int            type;
	int            offset;
	int            flag;
	int            active;
	int            active_rnd;
	int            active_clone;
	int            active_mask;
	char           pad[4];
	char           name[32];
	void*           data;
} CustomDataLayer;

typedef struct CustomDataExternal
{
	char           filename[240];
} CustomDataExternal;

typedef struct CustomData
{
	CustomDataLayer*              layers;
	int                          totlayer;
	int                          maxlayer;
	int                          totsize;
	int                          pad;
	void*                         pool;
	CustomDataExternal*           external;
} CustomData;

typedef struct HairKey
{
	float           co[3];
	float           time;
	float           weight;
	short           editflag;
	short           pad;
} HairKey;

typedef struct ParticleKey
{
	float           co[3];
	float           vel[3];
	float           rot[4];
	float           ave[3];
	float           time;
} ParticleKey;

typedef struct ChildParticle
{
	int             num;
	int             parent;
	int             pa[4];
	float           w[4];
	float           fuv[4];
	float           foffset;
	float           rt;
} ChildParticle;

typedef struct ParticleTarget
{
	ParticleTarget*           next;
	ParticleTarget*           prev;
	Object*                   ob;
	int                      psys;
	short                    flag;
	short                    mode;
	float                    time;
	float                    duration;
} ParticleTarget;

typedef struct ParticleDupliWeight
{
	ParticleDupliWeight*           next;
	ParticleDupliWeight*           prev;
	Object*                        ob;
	short                         count;
	short                         flag;
	short                         rt[2];
} ParticleDupliWeight;

typedef struct SPHFluidSettings
{
	float           spring_k;
	float           radius;
	float           rest_length;
	float           viscosity_omega;
	float           viscosity_beta;
	float           stiffness_k;
	float           stiffness_knear;
	float           rest_density;
	float           buoyancy;
} SPHFluidSettings;

typedef struct ClothSimSettings
{
	struct LinkNode*           cache;
	float                     mingoal;
	float                     Cdis;
	float                     Cvi;
	float                     gravity[3];
	float                     dt;
	float                     mass;
	float                     structural;
	float                     shear;
	float                     bending;
	float                     max_bend;
	float                     max_struct;
	float                     max_shear;
	float                     avg_spring_len;
	float                     timescale;
	float                     maxgoal;
	float                     eff_force_scale;
	float                     eff_wind_scale;
	float                     sim_time_old;
	float                     defgoal;
	float                     goalspring;
	float                     goalfrict;
	float                     velocity_smooth;
	float                     collider_friction;
	int                       stepsPerFrame;
	int                       flags;
	int                       preroll;
	int                       maxspringlen;
	short                     solver_type;
	short                     vgroup_bend;
	short                     vgroup_mass;
	short                     vgroup_struct;
	short                     shapekey_rest;
	short                     presets;
	short                     reset;
	short                     pad[3];
	EffectorWeights*           effector_weights;
} ClothSimSettings;

typedef struct ClothCollSettings
{
	struct LinkNode*    collision_list;
	float              epsilon;
	float              self_friction;
	float              friction;
	float              selfepsilon;
	int                flags;
	short              self_loop_count;
	short              loop_count;
	Group*              group;
} ClothCollSettings;

typedef struct bGPDspoint
{
	float           x;
	float           y;
	float           z;
	float           pressure;
} bGPDspoint;

typedef struct bGPDstroke
{
	bGPDstroke*           next;
	bGPDstroke*           prev;
	bGPDspoint*           points;
	int                  totpoints;
	short                thickness;
	short                flag;
} bGPDstroke;

typedef struct Report
{
	Report*           next;
	Report*           prev;
	short            type;
	short            flag;
	int              len;
	char*             typestr;
	char*             message;
} Report;

typedef struct ReportTimerInfo
{
	float           col[3];
	float           greyscale;
	float           widthfac;
} ReportTimerInfo;

typedef struct wmKeyMapItem
{
	wmKeyMapItem*           next;
	wmKeyMapItem*           prev;
	char                   idname[64];
	IDProperty*             properties;
	short                  propvalue;
	short                  type;
	short                  val;
	short                  shift;
	short                  ctrl;
	short                  alt;
	short                  oskey;
	short                  keymodifier;
	short                  flag;
	short                  maptype;
	short                  id;
	short                  pad;
	struct PointerRNA*      ptr;
} wmKeyMapItem;

typedef struct FModifier
{
	FModifier*           next;
	FModifier*           prev;
	void*                data;
	void*                edata;
	char                name[64];
	short               type;
	short               flag;
	float               influence;
} FModifier;

typedef struct FMod_Generator
{
	float*           coefficients;
	int             arraysize;
	int             poly_order;
	int             mode;
	int             flag;
} FMod_Generator;

typedef struct FMod_FunctionGenerator
{
	float           amplitude;
	float           phase_multiplier;
	float           phase_offset;
	float           value_offset;
	int             type;
	int             flag;
} FMod_FunctionGenerator;

typedef struct FCM_EnvelopeData
{
	float           min;
	float           max;
	float           time;
	short           f1;
	short           f2;
} FCM_EnvelopeData;

typedef struct FMod_Envelope
{
	FCM_EnvelopeData*           data;
	int                        totvert;
	float                      midval;
	float                      min;
	float                      max;
} FMod_Envelope;

typedef struct FMod_Cycles
{
	short           before_mode;
	short           after_mode;
	short           before_cycles;
	short           after_cycles;
} FMod_Cycles;

typedef struct FMod_Python
{
	Text*                 script;
	IDProperty*           prop;
} FMod_Python;

typedef struct FMod_Noise
{
	float           size;
	float           strength;
	float           phase;
	float           pad;
	short           depth;
	short           modification;
} FMod_Noise;

typedef struct FMod_Stepped
{
	float           step_size;
	float           offset;
	float           start_frame;
	float           end_frame;
	int             flag;
} FMod_Stepped;

typedef struct DriverTarget
{
	ID*              id;
	char*            rna_path;
	char            pchan_name[32];
	short           transChan;
	short           flag;
	int             idtype;
} DriverTarget;

typedef struct FPoint
{
	float           vec[2];
	int             flag;
	int             pad;
} FPoint;

typedef struct AnimMapPair
{
	char           from[128];
	char           to[128];
} AnimMapPair;

typedef struct KS_Path
{
	KS_Path*           next;
	KS_Path*           prev;
	ID*                id;
	char              group[64];
	int               idtype;
	short             groupmode;
	short             pad;
	char*              rna_path;
	int               array_index;
	short             flag;
	short             keyingflag;
} KS_Path;

typedef struct AnimOverride
{
	AnimOverride*           next;
	AnimOverride*           prev;
	char*                   rna_path;
	int                    array_index;
	float                  value;
} AnimOverride;

typedef struct BoidRule
{
	BoidRule*           next;
	BoidRule*           prev;
	int                type;
	int                flag;
	char               name[32];
} BoidRule;

typedef struct BoidData
{
	float           health;
	float           acc[3];
	short           state_id;
	short           mode;
} BoidData;

typedef struct SmokeFlowSettings
{
	SmokeModifierData*           smd;
	ParticleSystem*              psys;
	float                       density;
	float                       temp;
	float                       velocity[2];
	float                       vel_multi;
	float                       vgrp_heat_scale[2];
	short                       vgroup_flow;
	short                       vgroup_density;
	short                       vgroup_heat;
	short                       type;
	int                         flags;
} SmokeFlowSettings;

typedef struct SmokeCollSettings
{
	SmokeModifierData*           smd;
	struct BVHTree*              bvhtree;
	struct DerivedMesh*          dm;
	float*                       points;
	float*                       points_old;
	float*                       vel;
	float                       mat[4][4];
	float                       mat_old[4][4];
	int                         numpoints;
	int                         numverts;
	short                       type;
	short                       pad;
	int                         pad2;
} SmokeCollSettings;

typedef struct IDPropertyData
{
	void*               pointer;
	ListBase           group;
	int                val;
	int                val2;
} IDPropertyData;

typedef struct IDProperty
{
	IDProperty*               next;
	IDProperty*               prev;
	char                     type;
	char                     subtype;
	short                    flag;
	char                     name[32];
	int                      saved;
	IDPropertyData           data;
	int                      len;
	int                      totallen;
} IDProperty;

typedef struct Library
{
	ID                 id;
	ID*                 idblock;
	struct FileData*    filedata;
	char               name[240];
	char               filepath[240];
	int                tot;
	int                pad;
	Library*            parent;
} Library;

typedef struct IpoCurve
{
	IpoCurve*            next;
	IpoCurve*            prev;
	BPoint*              bp;
	BezTriple*           bezt;
	rctf                maxrct;
	rctf                totrct;
	short               blocktype;
	short               adrcode;
	short               vartype;
	short               totvert;
	short               ipo;
	short               extrap;
	short               flag;
	short               rt;
	float               ymin;
	float               ymax;
	int                 bitmask;
	float               slide_min;
	float               slide_max;
	float               curval;
	IpoDriver*           driver;
} IpoCurve;

typedef struct Ipo
{
	ID                 id;
	ListBase           curve;
	rctf               cur;
	short              blocktype;
	short              showkey;
	short              muteipo;
	short              pad;
} Ipo;

typedef struct Key
{
	ID                 id;
	AnimData*           adt;
	KeyBlock*           refkey;
	char               elemstr[32];
	int                elemsize;
	float              curval;
	ListBase           block;
	Ipo*                ipo;
	ID*                 from;
	short              type;
	short              totkey;
	short              slurph;
	short              flag;
} Key;

typedef struct Text
{
	ID                 id;
	char*               name;
	int                flags;
	int                nlines;
	ListBase           lines;
	TextLine*           curl;
	TextLine*           sell;
	int                curc;
	int                selc;
	ListBase           markers;
	char*               undo_buf;
	int                undo_pos;
	int                undo_len;
	void*               compiled;
	double             mtime;
} Text;

typedef struct Camera
{
	ID                 id;
	AnimData*           adt;
	short              type;
	short              flag;
	float              passepartalpha;
	float              clipsta;
	float              clipend;
	float              lens;
	float              ortho_scale;
	float              drawsize;
	float              shiftx;
	float              shifty;
	float              YF_dofdist;
	Ipo*                ipo;
	Object*             dof_ob;
} Camera;

typedef struct Image
{
	ID                     id;
	char                   name[240];
	ListBase               ibufs;
	struct GPUTexture*      gputexture;
	struct anim*            anim;
	struct RenderResult*    rr;
	struct RenderResult*    renders[8];
	short                  render_slot;
	short                  last_render_slot;
	short                  ok;
	short                  flag;
	short                  source;
	short                  type;
	int                    lastframe;
	short                  tpageflag;
	short                  totbind;
	short                  xrep;
	short                  yrep;
	short                  twsta;
	short                  twend;
	int                    bindcode;
	int*                    repbind;
	PackedFile*             packedfile;
	PreviewImage*           preview;
	float                  lastupdate;
	int                    lastused;
	short                  animspeed;
	short                  gen_x;
	short                  gen_y;
	short                  gen_type;
	float                  aspx;
	float                  aspy;
} Image;

typedef struct ColorBand
{
	short            flag;
	short            tot;
	short            cur;
	short            ipotype;
	CBData           data[32];
} ColorBand;

typedef struct Tex
{
	ID                     id;
	AnimData*               adt;
	float                  noisesize;
	float                  turbul;
	float                  bright;
	float                  contrast;
	float                  saturation;
	float                  rfac;
	float                  gfac;
	float                  bfac;
	float                  filtersize;
	float                  pad2;
	float                  mg_H;
	float                  mg_lacunarity;
	float                  mg_octaves;
	float                  mg_offset;
	float                  mg_gain;
	float                  dist_amount;
	float                  ns_outscale;
	float                  vn_w1;
	float                  vn_w2;
	float                  vn_w3;
	float                  vn_w4;
	float                  vn_mexp;
	short                  vn_distm;
	short                  vn_coltype;
	short                  noisedepth;
	short                  noisetype;
	short                  noisebasis;
	short                  noisebasis2;
	short                  imaflag;
	short                  flag;
	short                  type;
	short                  stype;
	float                  cropxmin;
	float                  cropymin;
	float                  cropxmax;
	float                  cropymax;
	int                    texfilter;
	int                    afmax;
	short                  xrepeat;
	short                  yrepeat;
	short                  extend;
	short                  fie_ima;
	int                    len;
	int                    frames;
	int                    offset;
	int                    sfra;
	float                  checkerdist;
	float                  nabla;
	float                  pad1;
	ImageUser              iuser;
	bNodeTree*              nodetree;
	Ipo*                    ipo;
	Image*                  ima;
	PluginTex*              plugin;
	ColorBand*              coba;
	EnvMap*                 env;
	PreviewImage*           preview;
	PointDensity*           pd;
	VoxelData*              vd;
	char                   use_nodes;
	char                   pad[7];
} Tex;

typedef struct Lamp
{
	ID                     id;
	AnimData*               adt;
	short                  type;
	short                  flag;
	int                    mode;
	short                  colormodel;
	short                  totex;
	float                  r;
	float                  g;
	float                  b;
	float                  k;
	float                  shdwr;
	float                  shdwg;
	float                  shdwb;
	float                  shdwpad;
	float                  energy;
	float                  dist;
	float                  spotsize;
	float                  spotblend;
	float                  haint;
	float                  att1;
	float                  att2;
	CurveMapping*           curfalloff;
	short                  falloff_type;
	short                  pad2;
	float                  clipsta;
	float                  clipend;
	float                  shadspotsize;
	float                  bias;
	float                  soft;
	float                  compressthresh;
	float                  pad5[3];
	short                  bufsize;
	short                  samp;
	short                  buffers;
	short                  filtertype;
	char                   bufflag;
	char                   buftype;
	short                  ray_samp;
	short                  ray_sampy;
	short                  ray_sampz;
	short                  ray_samp_type;
	short                  area_shape;
	float                  area_size;
	float                  area_sizey;
	float                  area_sizez;
	float                  adapt_thresh;
	short                  ray_samp_method;
	short                  pad1;
	short                  texact;
	short                  shadhalostep;
	short                  sun_effect_type;
	short                  skyblendtype;
	float                  horizon_brightness;
	float                  spread;
	float                  sun_brightness;
	float                  sun_size;
	float                  backscattered_light;
	float                  sun_intensity;
	float                  atm_turbidity;
	float                  atm_inscattering_factor;
	float                  atm_extinction_factor;
	float                  atm_distance_factor;
	float                  skyblendfac;
	float                  sky_exposure;
	short                  sky_colorspace;
	char                   pad4[6];
	Ipo*                    ipo;
	MTex*                   mtex[18];
	short                  pr_texture;
	char                   pad6[6];
	PreviewImage*           preview;
} Lamp;

typedef struct Material
{
	ID                       id;
	AnimData*                 adt;
	short                    material_type;
	short                    flag;
	float                    r;
	float                    g;
	float                    b;
	float                    specr;
	float                    specg;
	float                    specb;
	float                    mirr;
	float                    mirg;
	float                    mirb;
	float                    ambr;
	float                    ambb;
	float                    ambg;
	float                    amb;
	float                    emit;
	float                    ang;
	float                    spectra;
	float                    ray_mirror;
	float                    alpha;
	float                    ref;
	float                    spec;
	float                    zoffs;
	float                    add;
	float                    translucency;
	VolumeSettings           vol;
	float                    fresnel_mir;
	float                    fresnel_mir_i;
	float                    fresnel_tra;
	float                    fresnel_tra_i;
	float                    filter;
	float                    tx_limit;
	float                    tx_falloff;
	short                    ray_depth;
	short                    ray_depth_tra;
	short                    har;
	char                     seed1;
	char                     seed2;
	float                    gloss_mir;
	float                    gloss_tra;
	short                    samp_gloss_mir;
	short                    samp_gloss_tra;
	float                    adapt_thresh_mir;
	float                    adapt_thresh_tra;
	float                    aniso_gloss_mir;
	float                    dist_mir;
	short                    fadeto_mir;
	short                    shade_flag;
	int                      mode;
	int                      mode_l;
	short                    flarec;
	short                    starc;
	short                    linec;
	short                    ringc;
	float                    hasize;
	float                    flaresize;
	float                    subsize;
	float                    flareboost;
	float                    strand_sta;
	float                    strand_end;
	float                    strand_ease;
	float                    strand_surfnor;
	float                    strand_min;
	float                    strand_widthfade;
	char                     strand_uvname[32];
	float                    sbias;
	float                    lbias;
	float                    shad_alpha;
	int                      septex;
	char                     rgbsel;
	char                     texact;
	char                     pr_type;
	char                     use_nodes;
	short                    pr_back;
	short                    pr_lamp;
	short                    pr_texture;
	short                    ml_flag;
	short                    diff_shader;
	short                    spec_shader;
	float                    roughness;
	float                    refrac;
	float                    param[4];
	float                    rms;
	float                    darkness;
	short                    texco;
	short                    mapto;
	ColorBand*                ramp_col;
	ColorBand*                ramp_spec;
	char                     rampin_col;
	char                     rampin_spec;
	char                     rampblend_col;
	char                     rampblend_spec;
	short                    ramp_show;
	short                    pad3;
	float                    rampfac_col;
	float                    rampfac_spec;
	MTex*                     mtex[18];
	bNodeTree*                nodetree;
	Ipo*                      ipo;
	Group*                    group;
	PreviewImage*             preview;
	float                    friction;
	float                    fh;
	float                    reflect;
	float                    fhdist;
	float                    xyfrict;
	short                    dynamode;
	short                    pad2;
	float                    sss_radius[3];
	float                    sss_col[3];
	float                    sss_error;
	float                    sss_scale;
	float                    sss_ior;
	float                    sss_colfac;
	float                    sss_texfac;
	float                    sss_front;
	float                    sss_back;
	short                    sss_flag;
	short                    sss_preset;
	int                      mapto_textured;
	int                      pad4;
	ListBase                 gpumaterial;
} Material;

typedef struct VFont
{
	ID                   id;
	char                 name[256];
	struct VFontData*     data;
	PackedFile*           packedfile;
} VFont;

typedef struct MetaBall
{
	ID                 id;
	AnimData*           adt;
	BoundBox*           bb;
	ListBase           elems;
	ListBase           disp;
	ListBase*           editelems;
	Ipo*                ipo;
	Material**           mat;
	char               flag;
	char               flag2;
	short              totcol;
	short              texflag;
	short              pad;
	float              loc[3];
	float              size[3];
	float              rot[3];
	float              wiresize;
	float              rendersize;
	float              thresh;
	MetaElem*           lastelem;
} MetaBall;

typedef struct EditNurb
{
	ListBase           nurbs;
	struct GHash*       keyindex;
	int                shapenr;
	char               pad[4];
} EditNurb;

typedef struct Curve
{
	ID                 id;
	AnimData*           adt;
	BoundBox*           bb;
	ListBase           nurb;
	ListBase           disp;
	EditNurb*           editnurb;
	Object*             bevobj;
	Object*             taperobj;
	Object*             textoncurve;
	Ipo*                ipo;
	struct Path*        path;
	Key*                key;
	Material**           mat;
	ListBase           bev;
	float              loc[3];
	float              size[3];
	float              rot[3];
	short              texflag;
	short              pad1;
	short              drawflag;
	short              twist_mode;
	short              pad[2];
	float              twist_smooth;
	float              smallcaps_scale;
	short              pathlen;
	short              totcol;
	short              flag;
	short              bevresol;
	float              width;
	float              ext1;
	float              ext2;
	short              resolu;
	short              resolv;
	short              resolu_ren;
	short              resolv_ren;
	int                actnu;
	void*               lastsel;
	short              len;
	short              lines;
	short              pos;
	short              spacemode;
	float              spacing;
	float              linedist;
	float              shear;
	float              fsize;
	float              wordspace;
	float              ulpos;
	float              ulheight;
	float              xof;
	float              yof;
	float              linewidth;
	char*               str;
	struct SelBox*      selboxes;
	struct EditFont*    editfont;
	char               family[24];
	VFont*              vfont;
	VFont*              vfontb;
	VFont*              vfonti;
	VFont*              vfontbi;
	int                sepchar;
	float              ctime;
	int                totbox;
	int                actbox;
	TextBox*            tb;
	int                selstart;
	int                selend;
	CharInfo*           strinfo;
	CharInfo           curinfo;
} Curve;

typedef struct Mesh
{
	ID                          id;
	AnimData*                    adt;
	BoundBox*                    bb;
	ListBase                    effect;
	Ipo*                         ipo;
	Key*                         key;
	Material**                    mat;
	MFace*                       mface;
	MTFace*                      mtface;
	TFace*                       tface;
	MVert*                       mvert;
	MEdge*                       medge;
	MDeformVert*                 dvert;
	MCol*                        mcol;
	MSticky*                     msticky;
	Mesh*                        texcomesh;
	MSelect*                     mselect;
	struct EditMesh*             edit_mesh;
	CustomData                  vdata;
	CustomData                  edata;
	CustomData                  fdata;
	int                         totvert;
	int                         totedge;
	int                         totface;
	int                         totselect;
	int                         act_face;
	short                       texflag;
	short                       editflag;
	float                       loc[3];
	float                       size[3];
	float                       rot[3];
	float                       cubemapsize;
	int                         drawflag;
	short                       smoothresh;
	short                       flag;
	short                       subdiv;
	short                       subdivr;
	short                       totcol;
	short                       subsurftype;
	Multires*                    mr;
	PartialVisibility*           pv;
} Mesh;

typedef struct MultiresColFace
{
	MultiresCol           col[4];
} MultiresColFace;

typedef struct Multires
{
	ListBase             levels;
	MVert*                verts;
	char                 level_count;
	char                 current;
	char                 newlvl;
	char                 edgelvl;
	char                 pinlvl;
	char                 renderlvl;
	char                 use_col;
	char                 flag;
	CustomData           vdata;
	CustomData           fdata;
	short*                edge_flags;
	char*                 edge_creases;
} Multires;

typedef struct SubsurfModifierData
{
	ModifierData           modifier;
	short                  subdivType;
	short                  levels;
	short                  renderLevels;
	short                  flags;
	void*                   emCache;
	void*                   mCache;
} SubsurfModifierData;

typedef struct LatticeModifierData
{
	ModifierData           modifier;
	Object*                 object;
	char                   name[32];
} LatticeModifierData;

typedef struct CurveModifierData
{
	ModifierData           modifier;
	Object*                 object;
	char                   name[32];
	short                  defaxis;
	char                   pad[6];
} CurveModifierData;

typedef struct BuildModifierData
{
	ModifierData           modifier;
	float                  start;
	float                  length;
	int                    randomize;
	int                    seed;
} BuildModifierData;

typedef struct MaskModifierData
{
	ModifierData           modifier;
	Object*                 ob_arm;
	char                   vgroup[32];
	int                    mode;
	int                    flag;
} MaskModifierData;

typedef struct ArrayModifierData
{
	ModifierData           modifier;
	Object*                 start_cap;
	Object*                 end_cap;
	Object*                 curve_ob;
	Object*                 offset_ob;
	float                  offset[3];
	float                  scale[3];
	float                  length;
	float                  merge_dist;
	int                    fit_type;
	int                    offset_type;
	int                    flags;
	int                    count;
} ArrayModifierData;

typedef struct MirrorModifierData
{
	ModifierData           modifier;
	short                  axis;
	short                  flag;
	float                  tolerance;
	Object*                 mirror_ob;
} MirrorModifierData;

typedef struct EdgeSplitModifierData
{
	ModifierData           modifier;
	float                  split_angle;
	int                    flags;
} EdgeSplitModifierData;

typedef struct BevelModifierData
{
	ModifierData           modifier;
	float                  value;
	int                    res;
	int                    pad;
	short                  flags;
	short                  val_flags;
	short                  lim_flags;
	short                  e_flags;
	float                  bevel_angle;
	char                   defgrp_name[32];
} BevelModifierData;

typedef struct BMeshModifierData
{
	ModifierData           modifier;
	float                  pad;
	int                    type;
} BMeshModifierData;

typedef struct SmokeModifierData
{
	ModifierData                  modifier;
	SmokeDomainSettings*           domain;
	SmokeFlowSettings*             flow;
	SmokeCollSettings*             coll;
	float                         time;
	int                           type;
} SmokeModifierData;

typedef struct DisplaceModifierData
{
	ModifierData           modifier;
	Tex*                    texture;
	float                  strength;
	int                    direction;
	char                   defgrp_name[32];
	float                  midlevel;
	int                    texmapping;
	Object*                 map_object;
	char                   uvlayer_name[32];
	int                    uvlayer_tmp;
	int                    pad;
} DisplaceModifierData;

typedef struct UVProjectModifierData
{
	ModifierData           modifier;
	Object*                 projectors[10];
	Image*                  image;
	int                    flags;
	int                    num_projectors;
	float                  aspectx;
	float                  aspecty;
	float                  scalex;
	float                  scaley;
	char                   uvlayer_name[32];
	int                    uvlayer_tmp;
	int                    pad;
} UVProjectModifierData;

typedef struct DecimateModifierData
{
	ModifierData           modifier;
	float                  percent;
	int                    faceCount;
} DecimateModifierData;

typedef struct SmoothModifierData
{
	ModifierData           modifier;
	float                  fac;
	char                   defgrp_name[32];
	short                  flag;
	short                  repeat;
} SmoothModifierData;

typedef struct CastModifierData
{
	ModifierData           modifier;
	Object*                 object;
	float                  fac;
	float                  radius;
	float                  size;
	char                   defgrp_name[32];
	short                  flag;
	short                  type;
} CastModifierData;

typedef struct WaveModifierData
{
	ModifierData           modifier;
	Object*                 objectcenter;
	char                   defgrp_name[32];
	Tex*                    texture;
	Object*                 map_object;
	short                  flag;
	short                  pad;
	float                  startx;
	float                  starty;
	float                  height;
	float                  width;
	float                  narrow;
	float                  speed;
	float                  damp;
	float                  falloff;
	int                    texmapping;
	int                    uvlayer_tmp;
	char                   uvlayer_name[32];
	float                  timeoffs;
	float                  lifetime;
	float                  pad1;
} WaveModifierData;

typedef struct ArmatureModifierData
{
	ModifierData           modifier;
	short                  deformflag;
	short                  multi;
	int                    pad2;
	Object*                 object;
	float*                  prevCos;
	char                   defgrp_name[32];
} ArmatureModifierData;

typedef struct HookModifierData
{
	ModifierData           modifier;
	Object*                 object;
	char                   subtarget[32];
	float                  parentinv[4][4];
	float                  cent[3];
	float                  falloff;
	int*                    indexar;
	int                    totindex;
	float                  force;
	char                   name[32];
} HookModifierData;

typedef struct SoftbodyModifierData
{
	ModifierData           modifier;
} SoftbodyModifierData;

typedef struct ClothModifierData
{
	ModifierData                modifier;
	Scene*                       scene;
	struct Cloth*                clothObject;
	ClothSimSettings*            sim_parms;
	ClothCollSettings*           coll_parms;
	PointCache*                  point_cache;
	ListBase                    ptcaches;
} ClothModifierData;

typedef struct CollisionModifierData
{
	ModifierData           modifier;
	MVert*                  x;
	MVert*                  xnew;
	MVert*                  xold;
	MVert*                  current_xnew;
	MVert*                  current_x;
	MVert*                  current_v;
	MFace*                  mfaces;
	int                    numverts;
	int                    numfaces;
	float                  time;
	float                  pad;
	struct BVHTree*         bvhtree;
} CollisionModifierData;

typedef struct SurfaceModifierData
{
	ModifierData              modifier;
	MVert*                     x;
	MVert*                     v;
	struct DerivedMesh*        dm;
	struct BVHTreeFromMesh*    bvhtree;
	int                       cfra;
	int                       numverts;
} SurfaceModifierData;

typedef struct BooleanModifierData
{
	ModifierData           modifier;
	Object*                 object;
	int                    operation;
	int                    pad;
} BooleanModifierData;

typedef struct MeshDeformModifierData
{
	ModifierData            modifier;
	Object*                  object;
	char                    defgrp_name[32];
	short                   gridsize;
	short                   flag;
	short                   mode;
	short                   pad;
	MDefInfluence*           bindinfluences;
	int*                     bindoffsets;
	float*                   bindcagecos;
	int                     totvert;
	int                     totcagevert;
	MDefCell*                dyngrid;
	MDefInfluence*           dyninfluences;
	int*                     dynverts;
	int*                     pad2;
	int                     dyngridsize;
	int                     totinfluence;
	float                   dyncellmin[3];
	float                   dyncellwidth;
	float                   bindmat[4][4];
	float*                   bindweights;
	float*                   bindcos;
	void                    (*bindfunc)();
} MeshDeformModifierData;

typedef struct ParticleSystemModifierData
{
	ModifierData             modifier;
	ParticleSystem*           psys;
	struct DerivedMesh*       dm;
	int                      totdmvert;
	int                      totdmedge;
	int                      totdmface;
	short                    flag;
	short                    rt;
} ParticleSystemModifierData;

typedef struct ParticleInstanceModifierData
{
	ModifierData           modifier;
	Object*                 ob;
	short                  psys;
	short                  flag;
	short                  axis;
	short                  rt;
	float                  position;
	float                  random_position;
} ParticleInstanceModifierData;

typedef struct ExplodeModifierData
{
	ModifierData           modifier;
	int*                    facepa;
	short                  flag;
	short                  vgroup;
	float                  protect;
} ExplodeModifierData;

typedef struct MultiresModifierData
{
	ModifierData           modifier;
	char                   lvl;
	char                   sculptlvl;
	char                   renderlvl;
	char                   totlvl;
	char                   simple;
	char                   flags;
	char                   pad[2];
} MultiresModifierData;

typedef struct FluidsimModifierData
{
	ModifierData               modifier;
	FluidsimSettings*           fss;
	PointCache*                 point_cache;
} FluidsimModifierData;

typedef struct ShrinkwrapModifierData
{
	ModifierData           modifier;
	Object*                 target;
	Object*                 auxTarget;
	char                   vgroup_name[32];
	float                  keepDist;
	short                  shrinkType;
	short                  shrinkOpts;
	char                   projAxis;
	char                   subsurfLevels;
	char                   pad[6];
} ShrinkwrapModifierData;

typedef struct SimpleDeformModifierData
{
	ModifierData           modifier;
	Object*                 origin;
	char                   vgroup_name[32];
	float                  factor;
	float                  limit[2];
	char                   mode;
	char                   axis;
	char                   originOpts;
	char                   pad;
} SimpleDeformModifierData;

typedef struct ShapeKeyModifierData
{
	ModifierData           modifier;
} ShapeKeyModifierData;

typedef struct SolidifyModifierData
{
	ModifierData           modifier;
	char                   defgrp_name[32];
	float                  offset;
	float                  offset_fac;
	float                  crease_inner;
	float                  crease_outer;
	float                  crease_rim;
	int                    flag;
} SolidifyModifierData;

typedef struct ScrewModifierData
{
	ModifierData           modifier;
	Object*                 ob_axis;
	int                    steps;
	int                    render_steps;
	int                    iter;
	float                  screw_ofs;
	float                  angle;
	short                  axis;
	short                  flag;
} ScrewModifierData;

typedef struct Lattice
{
	ID                    id;
	short                 pntsu;
	short                 pntsv;
	short                 pntsw;
	short                 flag;
	short                 opntsu;
	short                 opntsv;
	short                 opntsw;
	short                 pad2;
	char                  typeu;
	char                  typev;
	char                  typew;
	char                  type;
	int                   pad;
	float                 fu;
	float                 fv;
	float                 fw;
	float                 du;
	float                 dv;
	float                 dw;
	BPoint*                def;
	Ipo*                   ipo;
	Key*                   key;
	MDeformVert*           dvert;
	char                  vgroup[32];
	float*                 latticedata;
	float                 latmat[4][4];
	EditLatt*              editlatt;
} Lattice;

typedef struct Object
{
	ID                         id;
	AnimData*                   adt;
	struct SculptSession*       sculpt;
	short                      type;
	short                      partype;
	int                        par1;
	int                        par2;
	int                        par3;
	char                       parsubstr[32];
	Object*                     parent;
	Object*                     track;
	Object*                     proxy;
	Object*                     proxy_group;
	Object*                     proxy_from;
	Ipo*                        ipo;
	struct Path*                path;
	BoundBox*                   bb;
	bAction*                    action;
	bAction*                    poselib;
	bPose*                      pose;
	void*                       data;
	bGPdata*                    gpd;
	bAnimVizSettings           avs;
	bMotionPath*                mpath;
	ListBase                   constraintChannels;
	ListBase                   effect;
	ListBase                   disp;
	ListBase                   defbase;
	ListBase                   modifiers;
	int                        mode;
	int                        restore_mode;
	Material**                   mat;
	char*                       matbits;
	int                        totcol;
	int                        actcol;
	float                      loc[3];
	float                      dloc[3];
	float                      orig[3];
	float                      size[3];
	float                      dsize[3];
	float                      rot[3];
	float                      drot[3];
	float                      quat[4];
	float                      dquat[4];
	float                      rotAxis[3];
	float                      drotAxis[3];
	float                      rotAngle;
	float                      drotAngle;
	float                      obmat[4][4];
	float                      parentinv[4][4];
	float                      constinv[4][4];
	float                      imat[4][4];
	int                        lay;
	short                      flag;
	short                      colbits;
	short                      transflag;
	short                      protectflag;
	short                      trackflag;
	short                      upflag;
	short                      nlaflag;
	short                      ipoflag;
	short                      ipowin;
	short                      scaflag;
	short                      scavisflag;
	short                      boundtype;
	int                        dupon;
	int                        dupoff;
	int                        dupsta;
	int                        dupend;
	float                      sf;
	float                      ctime;
	float                      mass;
	float                      damping;
	float                      inertia;
	float                      formfactor;
	float                      rdamping;
	float                      sizefac;
	float                      margin;
	float                      max_vel;
	float                      min_vel;
	float                      m_contactProcessingThreshold;
	short                      rotmode;
	char                       dt;
	char                       dtx;
	char                       empty_drawtype;
	char                       pad1[3];
	float                      empty_drawsize;
	float                      dupfacesca;
	ListBase                   prop;
	ListBase                   sensors;
	ListBase                   controllers;
	ListBase                   actuators;
	float                      bbsize[3];
	short                      index;
	short                      actdef;
	float                      col[4];
	int                        gameflag;
	int                        gameflag2;
	BulletSoftBody*             bsoft;
	short                      softflag;
	short                      recalc;
	float                      anisotropicFriction[3];
	ListBase                   constraints;
	ListBase                   nlastrips;
	ListBase                   hooks;
	ListBase                   particlesystem;
	PartDeflect*                pd;
	SoftBody*                   soft;
	Group*                      dup_group;
	short                      fluidsimFlag;
	short                      restrictflag;
	short                      shapenr;
	short                      shapeflag;
	float                      smoothresh;
	short                      recalco;
	short                      body_type;
	FluidsimSettings*           fluidsimSettings;
	struct DerivedMesh*         derivedDeform;
	struct DerivedMesh*         derivedFinal;
	int                        lastDataMask;
	int                        state;
	int                        init_state;
	int                        pad2;
	ListBase                   gpulamp;
	ListBase                   pc_ids;
	ListBase*                   duplilist;
} Object;

typedef struct PointCache
{
	PointCache*            next;
	PointCache*            prev;
	int                   flag;
	int                   step;
	int                   simframe;
	int                   startframe;
	int                   endframe;
	int                   editframe;
	int                   last_exact;
	int                   totpoint;
	int                   index;
	int                   rt;
	char                  name[64];
	char                  prev_name[64];
	char                  info[64];
	char                  path[240];
	ListBase              mem_cache;
	struct PTCacheEdit*    edit;
	void                  (*free_edit)();
} PointCache;

typedef struct SoftBody
{
	int                       totpoint;
	int                       totspring;
	struct BodyPoint*          bpoint;
	struct BodySpring*         bspring;
	char                      pad;
	char                      msg_lock;
	short                     msg_value;
	float                     nodemass;
	char                      namedVG_Mass[32];
	float                     grav;
	float                     mediafrict;
	float                     rklimit;
	float                     physics_speed;
	float                     goalspring;
	float                     goalfrict;
	float                     mingoal;
	float                     maxgoal;
	float                     defgoal;
	short                     vertgroup;
	char                      namedVG_Softgoal[32];
	short                     fuzzyness;
	float                     inspring;
	float                     infrict;
	char                      namedVG_Spring_K[32];
	int                       sfra;
	int                       efra;
	int                       interval;
	short                     local;
	short                     solverflags;
	SBVertex**                  keys;
	int                       totpointkey;
	int                       totkey;
	float                     secondspring;
	float                     colball;
	float                     balldamp;
	float                     ballstiff;
	short                     sbc_mode;
	short                     aeroedge;
	short                     minloops;
	short                     maxloops;
	short                     choke;
	short                     solver_ID;
	short                     plastic;
	short                     springpreload;
	struct SBScratch*          scratch;
	float                     shearstiff;
	float                     inpush;
	PointCache*                pointcache;
	ListBase                  ptcaches;
	EffectorWeights*           effector_weights;
	float                     lcom[3];
	float                     lrot[3][3];
	float                     lscale[3][3];
	char                      pad4[4];
} SoftBody;

typedef struct World
{
	ID                     id;
	AnimData*               adt;
	short                  colormodel;
	short                  totex;
	short                  texact;
	short                  mistype;
	float                  horr;
	float                  horg;
	float                  horb;
	float                  zenr;
	float                  zeng;
	float                  zenb;
	float                  ambr;
	float                  ambg;
	float                  ambb;
	float                  pad2;
	int                    fastcol;
	float                  exposure;
	float                  exp;
	float                  range;
	float                  linfac;
	float                  logfac;
	float                  gravity;
	float                  activityBoxRadius;
	short                  skytype;
	short                  mode;
	short                  occlusionRes;
	short                  physicsEngine;
	short                  ticrate;
	short                  maxlogicstep;
	short                  physubstep;
	short                  maxphystep;
	float                  misi;
	float                  miststa;
	float                  mistdist;
	float                  misthi;
	float                  starr;
	float                  starg;
	float                  starb;
	float                  stark;
	float                  starsize;
	float                  starmindist;
	float                  stardist;
	float                  starcolnoise;
	short                  dofsta;
	short                  dofend;
	short                  dofmin;
	short                  dofmax;
	float                  aodist;
	float                  aodistfac;
	float                  aoenergy;
	float                  aobias;
	short                  aomode;
	short                  aosamp;
	short                  aomix;
	short                  aocolor;
	float                  ao_adapt_thresh;
	float                  ao_adapt_speed_fac;
	float                  ao_approx_error;
	float                  ao_approx_correction;
	float                  ao_indirect_energy;
	float                  ao_env_energy;
	float                  ao_pad2;
	short                  ao_indirect_bounces;
	short                  ao_pad;
	short                  ao_samp_method;
	short                  ao_gather_method;
	short                  ao_approx_passes;
	short                  flag;
	float*                  aosphere;
	float*                  aotables;
	Ipo*                    ipo;
	MTex*                   mtex[18];
	short                  pr_texture;
	short                  pad[3];
	PreviewImage*           preview;
} World;

typedef struct RenderData
{
	AviCodecData*                     avicodecdata;
	QuicktimeCodecData*               qtcodecdata;
	QuicktimeCodecSettings           qtcodecsettings;
	FFMpegCodecData                  ffcodecdata;
	int                              cfra;
	int                              sfra;
	int                              efra;
	float                            subframe;
	int                              psfra;
	int                              pefra;
	int                              images;
	int                              framapto;
	short                            flag;
	short                            threads;
	float                            framelen;
	float                            blurfac;
	float                            edgeR;
	float                            edgeG;
	float                            edgeB;
	short                            fullscreen;
	short                            xplay;
	short                            yplay;
	short                            freqplay;
	short                            depth;
	short                            attrib;
	short                            rt2;
	short                            frame_step;
	short                            stereomode;
	short                            dimensionspreset;
	short                            filtertype;
	short                            size;
	short                            maximsize;
	short                            xsch;
	short                            ysch;
	short                            xparts;
	short                            yparts;
	short                            winpos;
	short                            planes;
	short                            imtype;
	short                            subimtype;
	short                            bufflag;
	short                            quality;
	short                            displaymode;
	short                            rpad1;
	short                            rpad2;
	int                              scemode;
	int                              mode;
	int                              raytrace_options;
	short                            raytrace_structure;
	short                            renderer;
	short                            ocres;
	short                            pad4;
	short                            alphamode;
	short                            osa;
	short                            frs_sec;
	short                            edgeint;
	rctf                             safety;
	rctf                             border;
	rcti                             disprect;
	ListBase                         layers;
	short                            actlay;
	short                            mblur_samples;
	float                            xasp;
	float                            yasp;
	float                            frs_sec_base;
	float                            gauss;
	int                              color_mgt_flag;
	float                            postgamma;
	float                            posthue;
	float                            postsat;
	float                            dither_intensity;
	short                            bake_osa;
	short                            bake_filter;
	short                            bake_mode;
	short                            bake_flag;
	short                            bake_normal_space;
	short                            bake_quad_split;
	float                            bake_maxdist;
	float                            bake_biasdist;
	float                            bake_pad;
	char                             backbuf[160];
	char                             pic[160];
	int                              stamp;
	short                            stamp_font_id;
	short                            pad3;
	char                             stamp_udata[160];
	float                            fg_stamp[4];
	float                            bg_stamp[4];
	char                             seq_prev_type;
	char                             seq_rend_type;
	char                             seq_flag;
	char                             pad5[5];
	int                              simplify_flag;
	short                            simplify_subsurf;
	short                            simplify_shadowsamples;
	float                            simplify_particles;
	float                            simplify_aosss;
	short                            cineonwhite;
	short                            cineonblack;
	float                            cineongamma;
	short                            jp2_preset;
	short                            jp2_depth;
	int                              rpad3;
	short                            domeres;
	short                            domemode;
	short                            domeangle;
	short                            dometilt;
	float                            domeresbuf;
	float                            pad2;
	Text*                             dometext;
	char                             engine[32];
} RenderData;

typedef struct GameData
{
	float                 gravity;
	float                 activityBoxRadius;
	short                 mode;
	short                 flag;
	short                 matmode;
	short                 pad[3];
	short                 occlusionRes;
	short                 physicsEngine;
	short                 ticrate;
	short                 maxlogicstep;
	short                 physubstep;
	short                 maxphystep;
	GameFraming           framing;
	short                 fullscreen;
	short                 xplay;
	short                 yplay;
	short                 freqplay;
	short                 depth;
	short                 attrib;
	short                 rt1;
	short                 rt2;
	GameDome              dome;
	short                 stereoflag;
	short                 stereomode;
	short                 xsch;
	short                 ysch;
	float                 eyeseparation;
	float                 pad1;
} GameData;

typedef struct ImagePaintSettings
{
	Paint           paint;
	short           flag;
	short           pad;
	short           seam_bleed;
	short           normal_angle;
	short           screen_grab_size[2];
	int             pad1;
	void*            paintcursor;
} ImagePaintSettings;

typedef struct ParticleEditSettings
{
	short                       flag;
	short                       totrekey;
	short                       totaddkey;
	short                       brushtype;
	ParticleBrushData           brush[7];
	void*                        paintcursor;
	float                       emitterdist;
	float                       rt;
	int                         selectmode;
	int                         edittype;
	int                         draw_step;
	int                         fade_frames;
	Scene*                       scene;
	Object*                      object;
} ParticleEditSettings;

typedef struct Sculpt
{
	Paint           paint;
	int             flags;
	int             radial_symm[3];
	float           last_x;
	float           last_y;
	float           last_angle;
	int             draw_anchored;
	int             anchored_size;
	float           anchored_location[3];
	float           anchored_initial_mouse[2];
	int             draw_pressure;
	float           pressure_value;
	float           special_rotation;
	int             pad;
} Sculpt;

typedef struct VPaint
{
	Paint                 paint;
	short                 flag;
	short                 pad;
	int                   tot;
	int*                   vpaint_prev;
	MDeformVert*           wpaint_prev;
	void*                  paintcursor;
} VPaint;

typedef struct ToolSettings
{
	VPaint*                         vpaint;
	VPaint*                         wpaint;
	Sculpt*                         sculpt;
	float                          vgroup_weight;
	short                          cornertype;
	short                          editbutflag;
	float                          jointrilimit;
	float                          degr;
	short                          step;
	short                          turn;
	float                          extr_offs;
	float                          doublimit;
	float                          normalsize;
	short                          automerge;
	short                          selectmode;
	short                          segments;
	short                          rings;
	short                          vertices;
	short                          unwrapper;
	float                          uvcalc_radius;
	float                          uvcalc_cubesize;
	float                          uvcalc_margin;
	short                          uvcalc_mapdir;
	short                          uvcalc_mapalign;
	short                          uvcalc_flag;
	short                          uv_flag;
	short                          uv_selectmode;
	short                          uv_pad[2];
	short                          autoik_chainlen;
	ImagePaintSettings             imapaint;
	ParticleEditSettings           particle;
	float                          proportional_size;
	float                          select_thresh;
	float                          clean_thresh;
	short                          autokey_mode;
	short                          autokey_flag;
	char                           retopo_mode;
	char                           retopo_paint_tool;
	char                           line_div;
	char                           ellipse_div;
	char                           retopo_hotspot;
	char                           multires_subdiv_type;
	short                          skgen_resolution;
	float                          skgen_threshold_internal;
	float                          skgen_threshold_external;
	float                          skgen_length_ratio;
	float                          skgen_length_limit;
	float                          skgen_angle_limit;
	float                          skgen_correlation_limit;
	float                          skgen_symmetry_limit;
	float                          skgen_retarget_angle_weight;
	float                          skgen_retarget_length_weight;
	float                          skgen_retarget_distance_weight;
	short                          skgen_options;
	char                           skgen_postpro;
	char                           skgen_postpro_passes;
	char                           skgen_subdivisions[3];
	char                           skgen_multi_level;
	Object*                         skgen_template;
	char                           bone_sketching;
	char                           bone_sketching_convert;
	char                           skgen_subdivision_number;
	char                           skgen_retarget_options;
	char                           skgen_retarget_roll;
	char                           skgen_side_string[8];
	char                           skgen_num_string[8];
	char                           edge_mode;
	short                          snap_mode;
	short                          snap_flag;
	short                          snap_target;
	short                          proportional;
	short                          prop_mode;
	char                           proportional_objects;
	char                           pad[3];
	int                            auto_normalize;
	short                          sculpt_paint_settings;
	short                          pad1;
	int                            sculpt_paint_unified_size;
	float                          sculpt_paint_unified_unprojected_radius;
	float                          sculpt_paint_unified_alpha;
} ToolSettings;

typedef struct Scene
{
	ID                        id;
	AnimData*                  adt;
	Object*                    camera;
	World*                     world;
	Scene*                     set;
	Image*                     ima;
	ListBase                  base;
	Base*                      basact;
	Object*                    obedit;
	float                     cursor[3];
	float                     twcent[3];
	float                     twmin[3];
	float                     twmax[3];
	int                       lay;
	int                       layact;
	int                       pad1;
	short                     flag;
	short                     use_nodes;
	bNodeTree*                 nodetree;
	Editing*                   ed;
	ToolSettings*              toolsettings;
	struct SceneStats*         stats;
	RenderData                r;
	AudioData                 audio;
	ListBase                  markers;
	ListBase                  transform_spaces;
	void*                      sound_scene;
	void*                      sound_scene_handle;
	void*                      sound_scrub_handle;
	void*                      fps_info;
	struct DagForest*          theDag;
	short                     dagisvalid;
	short                     dagflags;
	short                     recalc;
	short                     jumpframe;
	int                       pad5;
	int                       active_keyingset;
	ListBase                  keyingsets;
	GameFraming               framing;
	GameData                  gm;
	UnitSettings              unit;
	bGPdata*                   gpd;
	PhysicsSettings           physics_settings;
} Scene;

typedef struct BGpic
{
	BGpic*               next;
	BGpic*               prev;
	Image*               ima;
	ImageUser           iuser;
	float               xof;
	float               yof;
	float               size;
	float               blend;
	short               view;
	short               flag;
	float               pad2;
} BGpic;

typedef struct View3D
{
	SpaceLink*           next;
	SpaceLink*           prev;
	ListBase            regionbase;
	int                 spacetype;
	float               blockscale;
	short               blockhandler[8];
	float               viewquat[4];
	float               dist;
	float               pad1;
	int                 lay_used;
	short               persp;
	short               view;
	Object*              camera;
	Object*              ob_centre;
	ListBase            bgpicbase;
	BGpic*               bgpic;
	View3D*              localvd;
	char                ob_centre_bone[32];
	int                 lay;
	int                 layact;
	short               drawtype;
	short               pad2;
	short               scenelock;
	short               around;
	short               pad3;
	short               flag;
	short               flag2;
	short               pivot_last;
	float               lens;
	float               grid;
	float               gridview;
	float               padf;
	float               near;
	float               far;
	float               ofs[3];
	float               cursor[3];
	short               gridlines;
	short               pad4;
	short               gridflag;
	short               gridsubdiv;
	short               modeselect;
	short               keyflags;
	short               twtype;
	short               twmode;
	short               twflag;
	short               twdrawflag;
	int                 customdata_mask;
	ListBase            afterdraw_transp;
	ListBase            afterdraw_xray;
	ListBase            afterdraw_xraytransp;
	short               zbuf;
	short               transp;
	short               xray;
	char                ndofmode;
	char                ndoffilter;
	void*                properties_storage;
	bGPdata*             gpd;
} View3D;

typedef struct View2D
{
	rctf            tot;
	rctf            cur;
	rcti            vert;
	rcti            hor;
	rcti            mask;
	float           min[2];
	float           max[2];
	float           minzoom;
	float           maxzoom;
	short           scroll;
	short           scroll_ui;
	short           keeptot;
	short           keepzoom;
	short           keepofs;
	short           flag;
	short           align;
	short           winx;
	short           winy;
	short           oldwinx;
	short           oldwiny;
	short           around;
	float*           tab_offset;
	int             tab_num;
	int             tab_cur;
} View2D;

typedef struct SpaceLink
{
	SpaceLink*           next;
	SpaceLink*           prev;
	ListBase            regionbase;
	int                 spacetype;
	float               blockscale;
	short               blockhandler[8];
} SpaceLink;

typedef struct SpaceInfo
{
	SpaceLink*           next;
	SpaceLink*           prev;
	ListBase            regionbase;
	int                 spacetype;
	float               blockscale;
	short               blockhandler[8];
	bScreen*             screen;
	Scene*               scene;
} SpaceInfo;

typedef struct SpaceIpo
{
	SpaceLink*            next;
	SpaceLink*            prev;
	ListBase             regionbase;
	int                  spacetype;
	float                blockscale;
	short                blockhandler[8];
	View2D               v2d;
	bDopeSheet*           ads;
	ListBase             ghostCurves;
	short                mode;
	short                autosnap;
	int                  flag;
	float                cursorVal;
	int                  around;
} SpaceIpo;

typedef struct SpaceButs
{
	SpaceLink*            next;
	SpaceLink*            prev;
	ListBase             regionbase;
	int                  spacetype;
	float                blockscale;
	short                blockhandler[8];
	struct RenderInfo*    ri;
	View2D               v2d;
	short                mainb;
	short                mainbo;
	short                mainbuser;
	short                re_align;
	short                align;
	short                preview;
	char                 flag;
	char                 pad[3];
	void*                 path;
	int                  pathflag;
	int                  dataicon;
	ID*                   pinid;
} SpaceButs;

typedef struct SpaceSeq
{
	SpaceLink*           next;
	SpaceLink*           prev;
	ListBase            regionbase;
	int                 spacetype;
	float               blockscale;
	short               blockhandler[8];
	View2D              v2d;
	float               xof;
	float               yof;
	short               mainb;
	short               render_size;
	short               chanshown;
	short               zebra;
	int                 flag;
	float               zoom;
	int                 view;
	int                 pad;
	bGPdata*             gpd;
} SpaceSeq;

typedef struct SpaceFile
{
	SpaceLink*                  next;
	SpaceLink*                  prev;
	ListBase                   regionbase;
	int                        spacetype;
	int                        scroll_offset;
	FileSelectParams*           params;
	struct FileList*            files;
	ListBase*                   folders_prev;
	ListBase*                   folders_next;
	wmOperator*                 op;
	struct wmTimer*             smoothscroll_timer;
	struct FileLayout*          layout;
	short                      recentnr;
	short                      bookmarknr;
	short                      systemnr;
	short                      pad2;
} SpaceFile;

typedef struct SpaceOops
{
	SpaceLink*               next;
	SpaceLink*               prev;
	ListBase                regionbase;
	int                     spacetype;
	float                   blockscale;
	short                   blockhandler[8];
	View2D                  v2d;
	ListBase                tree;
	TreeStore*               treestore;
	char                    search_string[32];
	TreeStoreElem           search_tse;
	int                     search_flags;
	int                     do_;
	short                   flag;
	short                   outlinevis;
	short                   storeflag;
	short                   pad;
} SpaceOops;

typedef struct Scopes
{
	int                 ok;
	int                 sample_full;
	int                 sample_lines;
	float               accuracy;
	int                 wavefrm_mode;
	float               wavefrm_alpha;
	float               wavefrm_yfac;
	int                 wavefrm_height;
	float               vecscope_alpha;
	int                 vecscope_height;
	float               minmax[3][2];
	Histogram           hist;
	float*               waveform_1;
	float*               waveform_2;
	float*               waveform_3;
	float*               vecscope;
	int                 waveform_tot;
	int                 pad;
} Scopes;

typedef struct SpaceImage
{
	SpaceLink*              next;
	SpaceLink*              prev;
	ListBase               regionbase;
	int                    spacetype;
	float                  blockscale;
	short                  blockhandler[8];
	Image*                  image;
	ImageUser              iuser;
	CurveMapping*           cumap;
	short                  menunr;
	short                  imanr;
	short                  pad2;
	short                  curtile;
	int                    flag;
	short                  imtypenr;
	short                  lock;
	short                  pin;
	short                  pad3;
	char                   dt_uv;
	char                   sticky;
	char                   dt_uvstretch;
	char                   around;
	float                  cursor[2];
	float                  xof;
	float                  yof;
	float                  zoom;
	float                  pad4;
	float                  centx;
	float                  centy;
	bGPdata*                gpd;
	Scopes                 scopes;
	Histogram              sample_line_hist;
} SpaceImage;

typedef struct SpaceNla
{
	SpaceLink*            next;
	SpaceLink*            prev;
	ListBase             regionbase;
	int                  spacetype;
	float                blockscale;
	short                blockhandler[8];
	short                autosnap;
	short                flag;
	int                  pad;
	bDopeSheet*           ads;
	View2D               v2d;
} SpaceNla;

typedef struct SpaceText
{
	SpaceLink*           next;
	SpaceLink*           prev;
	ListBase            regionbase;
	int                 spacetype;
	float               blockscale;
	short               blockhandler[8];
	Text*                text;
	int                 top;
	int                 viewlines;
	short               flags;
	short               menunr;
	short               lheight;
	char                cwidth;
	char                linenrs_tot;
	int                 left;
	int                 showlinenrs;
	int                 tabnumber;
	short               showsyntax;
	short               line_hlight;
	short               overwrite;
	short               live_edit;
	float               pix_per_line;
	rcti                txtscroll;
	rcti                txtbar;
	int                 wordwrap;
	int                 doplugins;
	char                findstr[256];
	char                replacestr[256];
} SpaceText;

typedef struct Script
{
	ID             id;
	void*           py_draw;
	void*           py_event;
	void*           py_button;
	void*           py_browsercallback;
	void*           py_globaldict;
	int            flags;
	int            lastspace;
	char           scriptname[256];
	char           scriptarg[256];
} Script;

typedef struct SpaceScript
{
	SpaceLink*           next;
	SpaceLink*           prev;
	ListBase            regionbase;
	int                 spacetype;
	float               blockscale;
	Script*              script;
	short               flags;
	short               menunr;
	int                 pad1;
	void*                but_refs;
} SpaceScript;

typedef struct SpaceTime
{
	SpaceLink*           next;
	SpaceLink*           prev;
	ListBase            regionbase;
	int                 spacetype;
	float               blockscale;
	View2D              v2d;
	ListBase            caches;
	int                 cache_display;
	int                 pad;
	int                 flag;
	int                 redraws;
} SpaceTime;

typedef struct SpaceNode
{
	SpaceLink*           next;
	SpaceLink*           prev;
	ListBase            regionbase;
	int                 spacetype;
	float               blockscale;
	short               blockhandler[8];
	View2D              v2d;
	ID*                  id;
	ID*                  from;
	short               flag;
	short               menunr;
	float               aspect;
	void*                curfont;
	float               xof;
	float               yof;
	float               zoom;
	float               padf;
	float               mx;
	float               my;
	bNodeTree*           nodetree;
	bNodeTree*           edittree;
	int                 treetype;
	short               texfrom;
	short               pad;
	bGPdata*             gpd;
} SpaceNode;

typedef struct SpaceLogic
{
	SpaceLink*           next;
	SpaceLink*           prev;
	ListBase            regionbase;
	int                 spacetype;
	float               blockscale;
	short               blockhandler[8];
	short               flag;
	short               scaflag;
	int                 pad;
	bGPdata*             gpd;
} SpaceLogic;

typedef struct SpaceImaSel
{
	SpaceLink*           next;
	SpaceLink*           prev;
	ListBase            regionbase;
	int                 spacetype;
	float               blockscale;
	short               blockhandler[8];
	View2D              v2d;
	struct FileList*     files;
	char                title[24];
	char                dir[240];
	char                file[80];
	short               type;
	short               menu;
	short               flag;
	short               sort;
	void*                curfont;
	int                 active_file;
	int                 numtilesx;
	int                 numtilesy;
	int                 selstate;
	rcti                viewrect;
	rcti                bookmarkrect;
	float               scrollpos;
	float               scrollheight;
	float               scrollarea;
	float               aspect;
	short               retval;
	short               ipotype;
	short               filter;
	short               active_bookmark;
	short               pad;
	short               pad1;
	short               prv_w;
	short               prv_h;
	void                (*returnfunc)();
	void                (*returnfunc_event)();
	void                (*returnfunc_args)();
	void*                arg1;
	void*                arg2;
	short*               menup;
	char*                pupmenu;
	struct ImBuf*        img;
} SpaceImaSel;

typedef struct SpaceConsole
{
	SpaceLink*           next;
	SpaceLink*           prev;
	ListBase            regionbase;
	int                 spacetype;
	float               blockscale;
	short               blockhandler[8];
	int                 type;
	int                 rpt_mask;
	int                 flag;
	int                 lheight;
	ListBase            scrollback;
	ListBase            history;
	char                prompt[256];
	char                language[32];
	int                 sel_start;
	int                 sel_end;
} SpaceConsole;

typedef struct SpaceUserPref
{
	SpaceLink*           next;
	SpaceLink*           prev;
	ListBase            regionbase;
	int                 spacetype;
	int                 pad;
	char                filter[64];
} SpaceUserPref;

typedef struct SpaceSound
{
	SpaceLink*           next;
	SpaceLink*           prev;
	ListBase            regionbase;
	int                 spacetype;
	float               blockscale;
	ScrArea*             area;
	View2D              v2d;
	bSound*              sound;
	short               mode;
	short               sndnr;
	short               xof;
	short               yof;
	short               flag;
	short               lock;
	int                 pad2;
} SpaceSound;

typedef struct uiStyle
{
	uiStyle*               next;
	uiStyle*               prev;
	char                  name[64];
	uiFontStyle           paneltitle;
	uiFontStyle           grouplabel;
	uiFontStyle           widgetlabel;
	uiFontStyle           widget;
	float                 panelzoom;
	short                 minlabelchars;
	short                 minwidgetchars;
	short                 columnspace;
	short                 templatespace;
	short                 boxspace;
	short                 buttonspacex;
	short                 buttonspacey;
	short                 panelspace;
	short                 panelouter;
	short                 pad[1];
} uiStyle;

typedef struct ThemeUI
{
	uiWidgetColors                wcol_regular;
	uiWidgetColors                wcol_tool;
	uiWidgetColors                wcol_text;
	uiWidgetColors                wcol_radio;
	uiWidgetColors                wcol_option;
	uiWidgetColors                wcol_toggle;
	uiWidgetColors                wcol_num;
	uiWidgetColors                wcol_numslider;
	uiWidgetColors                wcol_menu;
	uiWidgetColors                wcol_pulldown;
	uiWidgetColors                wcol_menu_back;
	uiWidgetColors                wcol_menu_item;
	uiWidgetColors                wcol_box;
	uiWidgetColors                wcol_scroll;
	uiWidgetColors                wcol_progress;
	uiWidgetColors                wcol_list_item;
	uiWidgetStateColors           wcol_state;
	char                          iconfile[80];
} ThemeUI;

typedef struct bTheme
{
	bTheme*                   next;
	bTheme*                   prev;
	char                     name[32];
	ThemeUI                  tui;
	ThemeSpace               tbuts;
	ThemeSpace               tv3d;
	ThemeSpace               tfile;
	ThemeSpace               tipo;
	ThemeSpace               tinfo;
	ThemeSpace               tsnd;
	ThemeSpace               tact;
	ThemeSpace               tnla;
	ThemeSpace               tseq;
	ThemeSpace               tima;
	ThemeSpace               timasel;
	ThemeSpace               text;
	ThemeSpace               toops;
	ThemeSpace               ttime;
	ThemeSpace               tnode;
	ThemeSpace               tlogic;
	ThemeSpace               tuserpref;
	ThemeSpace               tconsole;
	ThemeWireColor           tarm[20];
	int                      active_theme_area;
	int                      pad;
} bTheme;

typedef struct UserDef
{
	int                  flag;
	int                  dupflag;
	int                  savetime;
	char                 tempdir[160];
	char                 fontdir[160];
	char                 renderdir[160];
	char                 textudir[160];
	char                 plugtexdir[160];
	char                 plugseqdir[160];
	char                 pythondir[160];
	char                 sounddir[160];
	char                 image_editor[240];
	char                 anim_player[240];
	int                  anim_player_preset;
	short                v2d_min_gridsize;
	short                timecode_style;
	short                versions;
	short                dbl_click_time;
	int                  gameflags;
	int                  wheellinescroll;
	int                  uiflag;
	int                  language;
	short                userpref;
	short                viewzoom;
	int                  mixbufsize;
	int                  audiodevice;
	int                  audiorate;
	int                  audioformat;
	int                  audiochannels;
	int                  scrollback;
	int                  dpi;
	short                encoding;
	short                transopts;
	short                menuthreshold1;
	short                menuthreshold2;
	ListBase             themes;
	ListBase             uifonts;
	ListBase             uistyles;
	ListBase             keymaps;
	ListBase             addons;
	char                 keyconfigstr[64];
	short                undosteps;
	short                undomemory;
	short                gp_manhattendist;
	short                gp_euclideandist;
	short                gp_eraser;
	short                gp_settings;
	short                tb_leftmouse;
	short                tb_rightmouse;
	SolidLight           light[3];
	short                tw_hotspot;
	short                tw_flag;
	short                tw_handlesize;
	short                tw_size;
	short                textimeout;
	short                texcollectrate;
	short                wmdrawmethod;
	short                pad2;
	int                  memcachelimit;
	int                  prefetchframes;
	short                frameserverport;
	short                pad_rot_angle;
	short                obcenter_dia;
	short                rvisize;
	short                rvibright;
	short                recent_files;
	short                smooth_viewtx;
	short                glreslimit;
	short                ndof_pan;
	short                ndof_rotate;
	short                curssize;
	short                color_picker_type;
	short                ipo_new;
	short                keyhandles_new;
	short                scrcastfps;
	short                scrcastwait;
	short                pad8;
	short                pad[3];
	char                 versemaster[160];
	char                 verseuser[160];
	float                glalphaclip;
	short                autokey_mode;
	short                autokey_flag;
	ColorBand            coba_weight;
	float                sculpt_paint_overlay_col[3];
	int                  pad3;
	char                 author[80];
} UserDef;

typedef struct bScreen
{
	ID                 id;
	ListBase           vertbase;
	ListBase           edgebase;
	ListBase           areabase;
	ListBase           regionbase;
	Scene*              scene;
	Scene*              newscene;
	short              full;
	short              winid;
	short              do_draw;
	short              do_refresh;
	short              do_draw_gesture;
	short              do_draw_paintcursor;
	short              do_draw_drag;
	short              swap;
	short              mainwin;
	short              subwinactive;
	int                pad2;
	struct wmTimer*     animtimer;
	void*               context;
	short              handler[8];
} bScreen;

typedef struct ScrVert
{
	ScrVert*           next;
	ScrVert*           prev;
	ScrVert*           newv;
	vec2s             vec;
	int               flag;
} ScrVert;

typedef struct ScrArea
{
	ScrArea*             next;
	ScrArea*             prev;
	ScrVert*             v1;
	ScrVert*             v2;
	ScrVert*             v3;
	ScrVert*             v4;
	bScreen*             full;
	rcti                totrct;
	char                spacetype;
	char                butspacetype;
	short               winx;
	short               winy;
	short               headertype;
	short               pad;
	short               do_refresh;
	short               cursor;
	short               flag;
	struct SpaceType*    type;
	ListBase            spacedata;
	ListBase            regionbase;
	ListBase            handlers;
	ListBase            actionzones;
} ScrArea;

typedef struct ARegion
{
	ARegion*               next;
	ARegion*               prev;
	View2D                v2d;
	rcti                  winrct;
	rcti                  drawrct;
	short                 winx;
	short                 winy;
	short                 swinid;
	short                 regiontype;
	short                 alignment;
	short                 flag;
	float                 fsize;
	short                 sizex;
	short                 sizey;
	short                 do_draw;
	short                 do_draw_overlay;
	short                 swap;
	short                 pad[3];
	struct ARegionType*    type;
	ListBase              uiblocks;
	ListBase              panels;
	ListBase              handlers;
	char*                  headerstr;
	void*                  regiondata;
} ARegion;

typedef struct Sequence
{
	Sequence*            next;
	Sequence*            prev;
	void*                tmp;
	void*                lib;
	char                name[24];
	int                 flag;
	int                 type;
	int                 len;
	int                 start;
	int                 startofs;
	int                 endofs;
	int                 startstill;
	int                 endstill;
	int                 machine;
	int                 depth;
	int                 startdisp;
	int                 enddisp;
	float               sat;
	float               pad;
	float               mul;
	float               handsize;
	int                 sfra;
	int                 anim_preseek;
	Strip*               strip;
	Ipo*                 ipo;
	Scene*               scene;
	Object*              scene_camera;
	struct anim*         anim;
	float               effect_fader;
	float               speed_fader;
	PluginSeq*           plugin;
	Sequence*            seq1;
	Sequence*            seq2;
	Sequence*            seq3;
	ListBase            seqbase;
	bSound*              sound;
	void*                scene_sound;
	float               volume;
	float               level;
	float               pan;
	int                 scenenr;
	int                 multicam_source;
	float               strobe;
	void*                effectdata;
	int                 anim_startofs;
	int                 anim_endofs;
	int                 blend_mode;
	float               blend_opacity;
} Sequence;

typedef struct Editing
{
	ListBase*           seqbasep;
	ListBase           seqbase;
	ListBase           metastack;
	Sequence*           act_seq;
	char               act_imagedir[256];
	char               act_sounddir[256];
	int                over_ofs;
	int                over_cfra;
	int                over_flag;
	int                pad;
	rctf               over_border;
} Editing;

typedef struct bSoundActuator
{
	short             flag;
	short             sndnr;
	int               pad1;
	int               pad2;
	short             pad3[2];
	float             volume;
	float             pitch;
	bSound*            sound;
	Sound3D           sound3D;
	short             type;
	short             pad4;
	short             pad5;
	short             pad6[1];
} bSoundActuator;

typedef struct bSound
{
	ID                   id;
	char                 name[240];
	PackedFile*           packedfile;
	void*                 handle;
	PackedFile*           newpackedfile;
	Ipo*                  ipo;
	float                volume;
	float                attenuation;
	float                pitch;
	float                min_gain;
	float                max_gain;
	float                distance;
	int                  flags;
	int                  pad;
	void*                 cache;
	void*                 playback_handle;
} bSound;

typedef struct Group
{
	ID                 id;
	ListBase           gobject;
	int                layer;
	float              dupli_ofs[3];
} Group;

typedef struct Bone
{
	Bone*                 next;
	Bone*                 prev;
	IDProperty*           prop;
	Bone*                 parent;
	ListBase             childbase;
	char                 name[32];
	float                roll;
	float                head[3];
	float                tail[3];
	float                bone_mat[3][3];
	int                  flag;
	float                arm_head[3];
	float                arm_tail[3];
	float                arm_mat[4][4];
	float                dist;
	float                weight;
	float                xwidth;
	float                length;
	float                zwidth;
	float                ease1;
	float                ease2;
	float                rad_head;
	float                rad_tail;
	float                size[3];
	int                  layer;
	short                segments;
	short                pad[3];
} Bone;

typedef struct bArmature
{
	ID                 id;
	AnimData*           adt;
	ListBase           bonebase;
	ListBase           chainbase;
	ListBase*           edbo;
	Bone*               act_bone;
	void*               act_edbone;
	void*               sketch;
	int                flag;
	int                drawtype;
	short              deformflag;
	short              pathflag;
	int                pad;
	int                layer;
	int                layer_protected;
	short              ghostep;
	short              ghostsize;
	short              ghosttype;
	short              pathsize;
	int                ghostsf;
	int                ghostef;
	int                pathsf;
	int                pathef;
	int                pathbc;
	int                pathac;
} bArmature;

typedef struct bPoseChannel
{
	bPoseChannel*           next;
	bPoseChannel*           prev;
	IDProperty*             prop;
	ListBase               constraints;
	char                   name[32];
	short                  flag;
	short                  constflag;
	short                  ikflag;
	short                  selectflag;
	short                  protectflag;
	short                  agrp_index;
	int                    pathlen;
	int                    pathsf;
	int                    pathef;
	Bone*                   bone;
	bPoseChannel*           parent;
	bPoseChannel*           child;
	ListBase               iktree;
	void*                   b_bone_mats;
	void*                   dual_quat;
	void*                   b_bone_dual_quats;
	float                  loc[3];
	float                  size[3];
	float                  eul[3];
	float                  quat[4];
	float                  rotAxis[3];
	float                  rotAngle;
	short                  rotmode;
	short                  pad;
	float                  chan_mat[4][4];
	float                  pose_mat[4][4];
	float                  constinv[4][4];
	float                  pose_head[3];
	float                  pose_tail[3];
	float                  limitmin[3];
	float                  limitmax[3];
	float                  stiffness[3];
	float                  ikstretch;
	float                  ikrotweight;
	float                  iklinweight;
	float*                  path;
	bMotionPath*            mpath;
	Object*                 custom;
	bPoseChannel*           custom_tx;
} bPoseChannel;

typedef struct bPose
{
	ListBase                   chanbase;
	struct GHash*               chanhash;
	short                      flag;
	short                      proxy_layer;
	float                      ctime;
	float                      stride_offset[3];
	float                      cyclic_offset[3];
	ListBase                   agroups;
	int                        active_group;
	int                        iksolver;
	void*                       ikdata;
	void*                       ikparam;
	bAnimVizSettings           avs;
	char                       proxy_act_bone[32];
} bPose;

typedef struct bActionGroup
{
	bActionGroup*             next;
	bActionGroup*             prev;
	ListBase                 channels;
	int                      flag;
	int                      customCol;
	char                     name[64];
	ThemeWireColor           cs;
} bActionGroup;

typedef struct bAction
{
	ID                 id;
	ListBase           curves;
	ListBase           chanbase;
	ListBase           groups;
	ListBase           markers;
	int                flag;
	int                active_marker;
} bAction;

typedef struct bDopeSheet
{
	ID*                 source;
	ListBase           chanbase;
	Group*              filter_grp;
	int                filterflag;
	int                flag;
} bDopeSheet;

typedef struct SpaceAction
{
	SpaceLink*            next;
	SpaceLink*            prev;
	ListBase             regionbase;
	int                  spacetype;
	float                blockscale;
	short                blockhandler[8];
	View2D               v2d;
	bAction*              action;
	bDopeSheet           ads;
	char                 mode;
	char                 autosnap;
	short                flag;
	float                timeslide;
} SpaceAction;

typedef struct bActionChannel
{
	bActionChannel*           next;
	bActionChannel*           prev;
	bActionGroup*             grp;
	Ipo*                      ipo;
	ListBase                 constraintChannels;
	int                      flag;
	char                     name[32];
	int                      temp;
} bActionChannel;

typedef struct bPythonConstraint
{
	Text*                 text;
	IDProperty*           prop;
	int                  flag;
	int                  tarnum;
	ListBase             targets;
	Object*               tar;
	char                 subtarget[32];
} bPythonConstraint;

typedef struct bActionStrip
{
	bActionStrip*           next;
	bActionStrip*           prev;
	short                  flag;
	short                  mode;
	short                  stride_axis;
	short                  curmod;
	Ipo*                    ipo;
	bAction*                act;
	Object*                 object;
	float                  start;
	float                  end;
	float                  actstart;
	float                  actend;
	float                  actoffs;
	float                  stridelen;
	float                  repeat;
	float                  scale;
	float                  blendin;
	float                  blendout;
	char                   stridechannel[32];
	char                   offs_bone[32];
	ListBase               modifiers;
} bActionStrip;

typedef struct bNodeSocket
{
	bNodeSocket*           next;
	bNodeSocket*           prev;
	bNodeSocket*           new_sock;
	char                  name[32];
	bNodeStack            ns;
	short                 type;
	short                 flag;
	short                 limit;
	short                 stack_index;
	short                 intern;
	short                 stack_index_ext;
	int                   pad1;
	float                 locx;
	float                 locy;
	int                   own_index;
	int                   to_index;
	bNodeSocket*           tosock;
	bNodeLink*             link;
} bNodeSocket;

typedef struct bNode
{
	bNode*                  next;
	bNode*                  prev;
	bNode*                  new_node;
	char                   name[32];
	short                  type;
	short                  flag;
	short                  done;
	short                  level;
	short                  lasty;
	short                  menunr;
	short                  stack_index;
	short                  nr;
	ListBase               inputs;
	ListBase               outputs;
	ID*                     id;
	void*                   storage;
	float                  locx;
	float                  locy;
	float                  width;
	float                  miniwidth;
	short                  custom1;
	short                  custom2;
	float                  custom3;
	float                  custom4;
	short                  need_exec;
	short                  exec;
	void*                   threaddata;
	rctf                   totr;
	rctf                   butr;
	rctf                   prvr;
	struct bNodePreview*    preview;
	struct uiBlock*         block;
	struct bNodeType*       typeinfo;
} bNode;

typedef struct bNodeTree
{
	ID                   id;
	AnimData*             adt;
	bGPdata*              gpd;
	ListBase             nodes;
	ListBase             links;
	bNodeStack*           stack;
	ListBase*             threadstack;
	int                  type;
	int                  init;
	int                  stacksize;
	int                  cur_index;
	int                  flag;
	int                  pad;
	ListBase             alltypes;
	struct bNodeType*     owntype;
	int                  pad2[2];
	void                 (*progress)();
	void                 (*stats_draw)();
	int                  (*test_break)();
	void*                 tbh;
	void*                 prh;
	void*                 sdh;
} bNodeTree;

typedef struct CurveMapping
{
	int                flag;
	int                cur;
	int                preset;
	int                changed_timestamp;
	rctf               curr;
	rctf               clipr;
	CurveMap           cm[4];
	float              black[3];
	float              white[3];
	float              bwmul[3];
	float              sample[3];
} CurveMapping;

typedef struct Brush
{
	ID                     id;
	BrushClone             clone;
	CurveMapping*           curve;
	MTex                   mtex;
	struct ImBuf*           icon_imbuf;
	PreviewImage*           preview;
	char                   icon_filepath[240];
	float                  normal_weight;
	short                  blend;
	short                  ob_mode;
	int                    size;
	int                    flag;
	float                  jitter;
	int                    spacing;
	int                    smooth_stroke_radius;
	float                  smooth_stroke_factor;
	float                  rate;
	float                  rgb[3];
	float                  alpha;
	int                    sculpt_plane;
	float                  plane_offset;
	char                   sculpt_tool;
	char                   vertexpaint_tool;
	char                   imagepaint_tool;
	char                   pad3;
	float                  autosmooth_factor;
	float                  crease_pinch_factor;
	float                  plane_trim;
	float                  texture_sample_bias;
	int                    texture_overlay_alpha;
	float                  unprojected_radius;
	float                  add_col[3];
	float                  sub_col[3];
} Brush;

typedef struct BoidParticle
{
	Object*             ground;
	BoidData           data;
	float              gravity[3];
	float              wander[3];
	float              rt;
} BoidParticle;

typedef struct ParticleData
{
	ParticleKey            state;
	ParticleKey            prev_state;
	HairKey*                hair;
	ParticleKey*            keys;
	BoidParticle*           boid;
	int                    totkey;
	float                  time;
	float                  lifetime;
	float                  dietime;
	int                    num;
	int                    num_dmcache;
	float                  fuv[4];
	float                  foffset;
	float                  size;
	int                    hair_index;
	short                  flag;
	short                  alive;
} ParticleData;

typedef struct ParticleSettings
{
	ID                         id;
	AnimData*                   adt;
	BoidSettings*               boids;
	SPHFluidSettings*           fluid;
	EffectorWeights*            effector_weights;
	int                        flag;
	short                      type;
	short                      from;
	short                      distr;
	short                      phystype;
	short                      rotmode;
	short                      avemode;
	short                      reactevent;
	short                      draw;
	short                      draw_as;
	short                      draw_size;
	short                      childtype;
	short                      ren_as;
	short                      subframes;
	short                      draw_step;
	short                      ren_step;
	short                      hair_step;
	short                      keys_step;
	short                      adapt_angle;
	short                      adapt_pix;
	short                      disp;
	short                      omat;
	short                      interpolation;
	short                      rotfrom;
	short                      integrator;
	short                      kink;
	short                      kink_axis;
	short                      bb_align;
	short                      bb_uv_split;
	short                      bb_anim;
	short                      bb_split_offset;
	float                      bb_tilt;
	float                      bb_rand_tilt;
	float                      bb_offset[2];
	short                      simplify_flag;
	short                      simplify_refsize;
	float                      simplify_rate;
	float                      simplify_transition;
	float                      simplify_viewport;
	float                      sta;
	float                      end;
	float                      lifetime;
	float                      randlife;
	float                      timetweak;
	float                      jitfac;
	float                      eff_hair;
	int                        totpart;
	int                        userjit;
	int                        grid_res;
	float                      normfac;
	float                      obfac;
	float                      randfac;
	float                      partfac;
	float                      tanfac;
	float                      tanphase;
	float                      reactfac;
	float                      ob_vel[3];
	float                      rt;
	float                      avefac;
	float                      phasefac;
	float                      randrotfac;
	float                      randphasefac;
	float                      mass;
	float                      size;
	float                      randsize;
	float                      reactshape;
	float                      acc[3];
	float                      dragfac;
	float                      brownfac;
	float                      dampfac;
	float                      randlength;
	int                        child_nbr;
	int                        ren_child_nbr;
	float                      parents;
	float                      childsize;
	float                      childrandsize;
	float                      childrad;
	float                      childflat;
	float                      clumpfac;
	float                      clumppow;
	float                      kink_amp;
	float                      kink_freq;
	float                      kink_shape;
	float                      rough1;
	float                      rough1_size;
	float                      rough2;
	float                      rough2_size;
	float                      rough2_thres;
	float                      rough_end;
	float                      rough_end_shape;
	float                      clength;
	float                      clength_thres;
	float                      branch_thres;
	float                      draw_line[2];
	float                      path_start;
	float                      path_end;
	int                        trail_count;
	int                        keyed_loops;
	Group*                      dup_group;
	ListBase                   dupliweights;
	Group*                      eff_group;
	Object*                     dup_ob;
	Object*                     bb_ob;
	Ipo*                        ipo;
	PartDeflect*                pd;
	PartDeflect*                pd2;
} ParticleSettings;

typedef struct ParticleSystem
{
	ParticleSystem*              next;
	ParticleSystem*              prev;
	ParticleSettings*            part;
	ParticleData*                particles;
	ChildParticle*               child;
	struct PTCacheEdit*          edit;
	void                        (*free_edit)();
	struct ParticleCacheKey**     pathcache;
	struct ParticleCacheKey**     childcache;
	ListBase                    pathcachebufs;
	ListBase                    childcachebufs;
	ClothModifierData*           clmd;
	struct DerivedMesh*          hair_in_dm;
	struct DerivedMesh*          hair_out_dm;
	Object*                      target_ob;
	Object*                      lattice;
	Object*                      parent;
	ListBase                    targets;
	char                        name[32];
	float                       imat[4][4];
	float                       cfra;
	float                       tree_frame;
	int                         seed;
	int                         rt;
	int                         flag;
	int                         totpart;
	int                         totchild;
	int                         totcached;
	int                         totchildcache;
	short                       recalc;
	short                       target_psys;
	short                       totkeyed;
	short                       bakespace;
	char                        bb_uvname[3][32];
	short                       vgroup[12];
	short                       vg_neg;
	short                       rt3;
	void*                        renderdata;
	PointCache*                  pointcache;
	ListBase                    ptcaches;
	ListBase*                    effectors;
	struct KDTree*               tree;
	struct ParticleDrawData*     pdd;
	float*                       frand;
} ParticleSystem;

typedef struct bGPDframe
{
	bGPDframe*           next;
	bGPDframe*           prev;
	ListBase            strokes;
	int                 framenum;
	int                 flag;
} bGPDframe;

typedef struct bGPDlayer
{
	bGPDlayer*           next;
	bGPDlayer*           prev;
	ListBase            frames;
	bGPDframe*           actframe;
	int                 flag;
	short               thickness;
	short               gstep;
	float               color[4];
	char                info[128];
} bGPDlayer;

typedef struct bGPdata
{
	ID                 id;
	ListBase           layers;
	int                flag;
	short              sbuffer_size;
	short              sbuffer_sflag;
	void*               sbuffer;
} bGPdata;

typedef struct ReportList
{
	ListBase           list;
	int                printlevel;
	int                storelevel;
	int                flag;
	int                pad;
	struct wmTimer*     reporttimer;
} ReportList;

typedef struct wmWindowManager
{
	ID                    id;
	wmWindow*              windrawable;
	wmWindow*              winactive;
	ListBase              windows;
	int                   initialized;
	short                 file_saved;
	short                 op_undo_depth;
	ListBase              operators;
	ListBase              queue;
	ReportList            reports;
	ListBase              jobs;
	ListBase              paintcursors;
	ListBase              drags;
	ListBase              keyconfigs;
	wmKeyConfig*           defaultconf;
	ListBase              timers;
	struct wmTimer*        autosavetimer;
} wmWindowManager;

typedef struct wmWindow
{
	wmWindow*              next;
	wmWindow*              prev;
	void*                  ghostwin;
	int                   winid;
	short                 grabcursor;
	short                 pad;
	bScreen*               screen;
	bScreen*               newscreen;
	char                  screenname[32];
	short                 posx;
	short                 posy;
	short                 sizex;
	short                 sizey;
	short                 windowstate;
	short                 monitor;
	short                 active;
	short                 cursor;
	short                 lastcursor;
	short                 addmousemove;
	short                 pad2[2];
	struct wmEvent*        eventstate;
	struct wmSubWindow*    curswin;
	struct wmGesture*      tweak;
	int                   drawmethod;
	int                   drawfail;
	void*                  drawdata;
	ListBase              queue;
	ListBase              handlers;
	ListBase              modalhandlers;
	ListBase              subwindows;
	ListBase              gesture;
} wmWindow;

typedef struct wmKeyMap
{
	wmKeyMap*           next;
	wmKeyMap*           prev;
	ListBase           items;
	char               idname[64];
	short              spaceid;
	short              regionid;
	short              flag;
	short              kmi_id;
	int                (*poll)();
	void*               modal_items;
} wmKeyMap;

typedef struct wmKeyConfig
{
	wmKeyConfig*           next;
	wmKeyConfig*           prev;
	char                  idname[64];
	char                  basename[64];
	ListBase              keymaps;
	int                   actkeymap;
	int                   flag;
} wmKeyConfig;

typedef struct wmOperator
{
	wmOperator*               next;
	wmOperator*               prev;
	char                     idname[64];
	IDProperty*               properties;
	struct wmOperatorType*    type;
	void*                     customdata;
	void*                     py_instance;
	struct PointerRNA*        ptr;
	ReportList*               reports;
	ListBase                 macro;
	wmOperator*               opm;
	struct uiLayout*          layout;
	short                    flag;
	short                    pad[3];
} wmOperator;

typedef struct FMod_Limits
{
	rctf           rect;
	int            flag;
	int            pad;
} FMod_Limits;

typedef struct DriverVar
{
	DriverVar*              next;
	DriverVar*              prev;
	char                   name[64];
	DriverTarget           targets[8];
	short                  num_targets;
	short                  type;
	float                  curval;
} DriverVar;

typedef struct ChannelDriver
{
	ListBase           variables;
	char               expression[256];
	void*               expr_comp;
	float              curval;
	float              influence;
	int                type;
	int                flag;
} ChannelDriver;

typedef struct FCurve
{
	FCurve*                  next;
	FCurve*                  prev;
	bActionGroup*            grp;
	ChannelDriver*           driver;
	ListBase                modifiers;
	BezTriple*               bezt;
	FPoint*                  fpt;
	int                     totvert;
	float                   curval;
	short                   flag;
	short                   extend;
	int                     array_index;
	char*                    rna_path;
	int                     color_mode;
	float                   color[3];
} FCurve;

typedef struct AnimMapper
{
	AnimMapper*           next;
	AnimMapper*           prev;
	bAction*              target;
	ListBase             mappings;
} AnimMapper;

typedef struct NlaStrip
{
	NlaStrip*             next;
	NlaStrip*             prev;
	ListBase             strips;
	bAction*              act;
	AnimMapper*           remap;
	ListBase             fcurves;
	ListBase             modifiers;
	char                 name[64];
	float                influence;
	float                strip_time;
	float                start;
	float                end;
	float                actstart;
	float                actend;
	float                repeat;
	float                scale;
	float                blendin;
	float                blendout;
	short                blendmode;
	short                extendmode;
	short                pad1;
	short                type;
	int                  flag;
	int                  pad2;
} NlaStrip;

typedef struct NlaTrack
{
	NlaTrack*           next;
	NlaTrack*           prev;
	ListBase           strips;
	int                flag;
	int                index;
	char               name[64];
} NlaTrack;

typedef struct KeyingSet
{
	KeyingSet*           next;
	KeyingSet*           prev;
	ListBase            paths;
	char                name[64];
	char                typeinfo[64];
	short               flag;
	short               keyingflag;
	int                 active_path;
} KeyingSet;

typedef struct AnimData
{
	bAction*              action;
	bAction*              tmpact;
	AnimMapper*           remap;
	ListBase             nla_tracks;
	NlaStrip*             actstrip;
	ListBase             drivers;
	ListBase             overrides;
	int                  flag;
	int                  recalc;
	short                act_blendmode;
	short                act_extendmode;
	float                act_influence;
} AnimData;

typedef struct IdAdtTemplate
{
	ID                 id;
	AnimData*           adt;
} IdAdtTemplate;

typedef struct BoidRuleGoalAvoid
{
	BoidRule           rule;
	Object*             ob;
	int                options;
	float              fear_factor;
	int                signal_id;
	int                channels;
} BoidRuleGoalAvoid;

typedef struct BoidRuleAvoidCollision
{
	BoidRule           rule;
	int                options;
	float              look_ahead;
} BoidRuleAvoidCollision;

typedef struct BoidRuleFollowLeader
{
	BoidRule           rule;
	Object*             ob;
	float              loc[3];
	float              oloc[3];
	float              cfra;
	float              distance;
	int                options;
	int                queue_size;
} BoidRuleFollowLeader;

typedef struct BoidRuleAverageSpeed
{
	BoidRule           rule;
	float              wander;
	float              level;
	float              speed;
	float              rt;
} BoidRuleAverageSpeed;

typedef struct BoidRuleFight
{
	BoidRule           rule;
	float              distance;
	float              flee_distance;
} BoidRuleFight;

typedef struct BoidState
{
	BoidState*           next;
	BoidState*           prev;
	ListBase            rules;
	ListBase            conditions;
	ListBase            actions;
	char                name[32];
	int                 id;
	int                 flag;
	int                 ruleset_type;
	float               rule_fuzziness;
	int                 signal_id;
	int                 channels;
	float               volume;
	float               falloff;
} BoidState;

typedef struct BoidSettings
{
	int                options;
	int                last_state_id;
	float              landing_smoothness;
	float              rt;
	float              banking;
	float              height;
	float              health;
	float              aggression;
	float              strength;
	float              accuracy;
	float              range;
	float              air_min_speed;
	float              air_max_speed;
	float              air_max_acc;
	float              air_max_ave;
	float              air_personal_space;
	float              land_jump_speed;
	float              land_max_speed;
	float              land_max_acc;
	float              land_max_ave;
	float              land_personal_space;
	float              land_stick_force;
	ListBase           states;
} BoidSettings;

typedef struct SmokeDomainSettings
{
	SmokeModifierData*           smd;
	struct FLUID_3D*             fluid;
	Group*                       fluid_group;
	Group*                       eff_group;
	Group*                       coll_group;
	struct WTURBULENCE*          wt;
	struct GPUTexture*           tex;
	struct GPUTexture*           tex_wt;
	struct GPUTexture*           tex_shadow;
	float*                       shadow;
	float                       p0[3];
	float                       p1[3];
	float                       dx;
	float                       omega;
	float                       temp;
	float                       tempAmb;
	float                       alpha;
	float                       beta;
	int                         res[3];
	int                         amplify;
	int                         maxres;
	int                         flags;
	int                         pad;
	int                         viewsettings;
	short                       noise;
	short                       diss_percent;
	int                         diss_speed;
	float                       strength;
	int                         res_wt[3];
	float                       dx_wt;
	int                         v3dnum;
	int                         cache_comp;
	int                         cache_high_comp;
	PointCache*                  point_cache[2];
	ListBase                    ptcaches[2];
	EffectorWeights*             effector_weights;
	int                         border_collisions;
	float                       time_scale;
	float                       vorticity;
	int                         pad2;
} SmokeDomainSettings;

}
#endif//_Blender_h_