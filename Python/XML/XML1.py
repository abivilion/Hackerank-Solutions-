

def get_attr_number(node):
    #   print(etree.tostring(node))
      return etree.tostring(node).count(b'=')    

