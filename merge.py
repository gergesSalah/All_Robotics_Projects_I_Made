def marge(dict1, dict2):
    # create the output dictionary, which contains all
    # the mappings from `dict1`
    merged = dict1

    # populate `merged` with the mappings in dict2 if:
    #   - the key doesn't exist in `merged`
    #   - the value in dict2 is larger
    for key in dict2:
        if key not in merged or dict2[key] > merged[key]:
            merged[key] = dict2[key]
    return merged

dic1 = {"gerges" : 5,"salah":8}
dic2 = {"mohand" :9,"amon":1}
print(marge(dic1,dic2))