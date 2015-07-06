from ROOT import TChain

ch=TChain("track_trackkalmanhit_tree")
ch.AddFile("data/larlite_reco3d_kalmanhit.root")

print ch.GetEntries()

ch.GetEntry(0)

for entry in xrange(ch.GetEntries()):

    print "entry",entry

    ch.GetEntry(entry)

    track_v = ch.track_trackkalmanhit_branch

    print track_v,'has',track_v.size(),'tracks'

    for track_index in xrange(track_v.size()):

        track = track_v[track_index]

        print track

    if entry > 10:
        break
